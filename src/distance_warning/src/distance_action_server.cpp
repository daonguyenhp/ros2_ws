#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <thread> // C++ libraries used for multithreading
#include "distance_warning/action/check_distance.hpp"

using CheckDistance = distance_warning::action::CheckDistance;
using GoalHandle = rclcpp_action::ServerGoalHandle<CheckDistance>;

class DistanceActionServer : public rclcpp::Node
{
    public:
        DistanceActionServer() : Node("distance_action_server")
        {
            this->declare_parameter<double>("threshold", 0.5);
            // TODO: Create Action Server
            action_server_ = rclcpp_action::create_server<CheckDistance>(
                this, "check_distance",
                // Leave a space (placeholder) for the second parameter; the actual data will be filled in later
                std::bind(&DistanceActionServer::handleGoal, this, std::placeholders::_1, std::placeholders::_2),
                std::bind(&DistanceActionServer::handleCancel, this, std::placeholders::_1),
                std::bind(&DistanceActionServer::handleAccepted, this, std::placeholders::_1));
        }
    private:
        rclcpp_action::GoalResponse handleGoal (
            const rclcpp_action::GoalUUID &, // Order ID
            std::shared_ptr<const CheckDistance::Goal> goal) // It contains the distance number that the customer wants you to check.
        {
            RCLCPP_INFO(this->get_logger(), "Received goal: check %.2f m", goal->distance_to_check);
            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE; // Default is ACCEPT
        }

        rclcpp_action::CancelResponse handleCancel(const std::shared_ptr<GoalHandle>)
        {
            return rclcpp_action::CancelResponse::ACCEPT;
        }

        void handleAccepted(const std::shared_ptr<GoalHandle> goal_handle)
        {
            // Create a new thread to work on, to avoid system freezes
            std::thread{std::bind(&DistanceActionServer::execute, this, goal_handle)}.detach();
        }

        void execute (const std::shared_ptr<GoalHandle> goal_handle)
        {
            float distance = goal_handle->get_goal()->distance_to_check;
            auto feedback = std::make_shared<CheckDistance::Feedback>();
            auto result = std::make_shared<CheckDistance::Result>();

            std::vector<std::string> steps = {
                "Receiving distance value...",
                "Fetching threshold parameter...",
                "Comparing values...",
                "Generating result...",
                "Done."
            };

            // TODO: Loop through 5 steps
            for (size_t i = 0; i < steps.size(); ++i) {
                // Check if the guest canceled their reservation midway.
                if (goal_handle->is_canceling()) {
                    result->result_message = "Canceled during execution";
                    goal_handle->canceled(result);
                    RCLCPP_INFO(this->get_logger(), "Goal canceled");
                    return;
                }

                // Update Feedback and then send it
                feedback->step = i + 1;
                feedback->total_steps = steps.size();
                feedback->feedback_msg = steps[i];
                goal_handle->publish_feedback(feedback);
                
                RCLCPP_INFO(this->get_logger(), "Publishing feedback: %s", steps[i].c_str());
                std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Delay 500ms each step
            }

            // TODO: Find the threshold and compare it to the distance.
            double threshold = this->get_parameter("threshold").as_double();
            if (distance < threshold) {
                result->is_safe = false;
                result->result_message = "Warning: Object too close!";
            } else {
                result->is_safe = true;
                result->result_message = "Safe!";
            }

            goal_handle->succeed(result);
            RCLCPP_INFO(this->get_logger(), "Goal succeeded!");
        }

        rclcpp_action::Server<CheckDistance>::SharedPtr action_server_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<DistanceActionServer>());
  rclcpp::shutdown();
  return 0;
}