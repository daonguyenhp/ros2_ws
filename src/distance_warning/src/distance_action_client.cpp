#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include "distance_warning/action/check_distance.hpp"

using CheckDistance = distance_warning::action::CheckDistance;
using GoalHandle = rclcpp_action::ClientGoalHandle<CheckDistance>;

class DistanceActionClient : public rclcpp::Node
{
    public:
    DistanceActionClient() : Node("distance_action_client")
    {
        client_ = rclcpp_action::create_client<CheckDistance>(this, "check_distance");
    }

    void sendGoal(float distance)
    {
        if (!client_->wait_for_action_server(std::chrono::seconds(5))) {
        RCLCPP_ERROR(this->get_logger(), "Action server not available");
        return;
        }

        auto goal_msg = CheckDistance::Goal();
        goal_msg.distance_to_check = distance;
        RCLCPP_INFO(this->get_logger(), "Sending goal: check %.2f m", distance);

        auto send_goal_options = rclcpp_action::Client<CheckDistance>::SendGoalOptions();

        send_goal_options.goal_response_callback = 
        std::bind(&DistanceActionClient::goal_response_callback, this, std::placeholders::_1);
        send_goal_options.feedback_callback = 
        std::bind(&DistanceActionClient::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
        send_goal_options.result_callback = 
        std::bind(&DistanceActionClient::result_callback, this, std::placeholders::_1);

        // TODO: Set send_goal_options.feedback_callback
        //   - In từng bước: [step/total_steps]: feedback_msg
    
        // TODO: Set send_goal_options.result_callback
        //   - In SAFE hoặc NOT SAFE theo result->is_safe

        client_->async_send_goal(goal_msg, send_goal_options);
    }

    private:
        void goal_response_callback(const GoalHandle::SharedPtr & goal_handle)
        {
            if (!goal_handle) {
            RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
            } else {
            RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result...");
            }
        }

        void feedback_callback(
            GoalHandle::SharedPtr, // Empty
            const std::shared_ptr<const CheckDistance::Feedback> feedback)
        {
            RCLCPP_INFO(this->get_logger(), "Feedback [%d/%d]: %s",
                feedback->step, 
                feedback->total_steps, 
                feedback->feedback_msg.c_str());
        }

        void result_callback(const GoalHandle::WrappedResult & result)
        {
            if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
                if (result.result->is_safe) {
                    RCLCPP_INFO(this->get_logger(), "Result: SAFE! (%s)", result.result->result_message.c_str());
                } else {
                    RCLCPP_WARN(this->get_logger(), "Result: NOT SAFE! (%s)", result.result->result_message.c_str());
                }
            } else {
                RCLCPP_ERROR(this->get_logger(), "Goal failed or was canceled");
            }
            
            // Node will automatically shut down when the task is finished
            rclcpp::shutdown();
        }

        rclcpp_action::Client<CheckDistance>::SharedPtr client_;
    };

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<DistanceActionClient>();
  node->sendGoal(0.3f);  // TODO: Thay bằng argv nếu muốn
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}