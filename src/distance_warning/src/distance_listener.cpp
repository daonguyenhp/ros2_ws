#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/float32.hpp>

// This DistanceListener class inherits all the features of a standard Node in ROS 2.
class DistanceListener : public rclcpp::Node
{
    public:
    // Named this node "distance_listener".
        DistanceListener() : Node("distance_listener")
        {
            // Register a parameter named "threshold" with the ROS 2 system.
            this->declare_parameter<double>("threshold", 0.5);
            
            // TODO: Create subscriber listening to "distance_topic"
            subscription_ = this->create_subscription<std_msgs::msg::Float32>("distance_topic", 10, 
                std::bind(&DistanceListener::listenerCallBack, this, std::placeholders::_1));
        }
    private:
        double get_threshold()
        {
            return this->get_parameter("threshold").as_double();
        }

        void listenerCallBack(const std_msgs::msg::Float32::SharedPtr msg)
        {
            double distance = msg->data;
            double threshold = this->get_threshold();
            // TODO: Log the distance received
            RCLCPP_INFO(this->get_logger(), "Distance received: %.2f m", distance);
            // TODO: If distance < threshold, log warning
            if (distance < threshold) {
                RCLCPP_WARN(this->get_logger(), "Warning: Object too close! (%.2f m < threshold: %.2f m)", distance, threshold);
            }
        }

        rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr subscription_;
};

int main (int argc, char * argv[]) 
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DistanceListener>());
    rclcpp::shutdown();
    return 0;
}