#include <rclcpp/rclcpp.hpp>
#include "distance_warning/srv/set_threshold.hpp"
#include <sstream>
#include <iomanip>

using namespace std;

using SetThreshold = distance_warning::srv::SetThreshold;

class SetThresholdService : public rclcpp::Node {
    public:
        SetThresholdService() : Node("set_threshold_service")
        {
            this->declare_parameter<double>("threshold", 0.5);
            // TODO: Create service server
            service_ = this->create_service<SetThreshold>("set_threshold",
                std::bind(&SetThresholdService::handleSetThreshold, this,
                std::placeholders::_1, std::placeholders::_2));
        }

    private:
        double get_threshold()
        {
            return this->get_parameter("threshold").as_double();
        }

        void handleSetThreshold (
            const SetThreshold::Request::SharedPtr request,
            SetThreshold::Response::SharedPtr response)
        {
            double current = this->get_threshold();
            double new_threshold = current;

            stringstream ss;
            ss << fixed << setprecision(2);

            // TODO: Increase or Decrease "new_threshold" through request->increase
            if (request->increase) {
                new_threshold += 0.1; 
                if (new_threshold > 1.5) {
                    new_threshold = 1.5;
                    response->success = false;
                    ss << "Threshold remained unchanged " << new_threshold << " m";
                } else {
                    response->success = true; 
                    ss << "Threshold increased to " << new_threshold << " m";
                }
            } else {
                new_threshold -= 0.1; 
                if (new_threshold < 0.1) {
                    new_threshold = 0.1;
                    response->success = false;
                    ss << "Threshold remained unchanged " << new_threshold << " m";
                } else {
                    response->success = true; 
                    ss << "Threshold decreased by " << new_threshold << " m";
                }
            }

            // TODO: Update parameter 
            this->set_parameter(rclcpp::Parameter("threshold", new_threshold));

            // TODO: Set response->success, new_threshold, message
            response->new_threshold = new_threshold;
            response->message = ss.str();
            
            RCLCPP_INFO(this->get_logger(), "Threshold updated: %.2f -> %.2f m", current, new_threshold);
        }
        
        rclcpp::Service<SetThreshold>::SharedPtr service_;
};

int main(int argc, char * argv[]) 
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SetThresholdService>());
    rclcpp::shutdown();
    return 0;
}