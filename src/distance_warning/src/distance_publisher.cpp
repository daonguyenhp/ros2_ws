#include <rclcpp/rclcpp.hpp> // Standard Library
#include <std_msgs/msg/float32.hpp> // The library contains the Float32 data type
#include <random>
using namespace std;
using namespace std::chrono_literals;

class DistancePublisher : public rclcpp::Node
{
    public:
        // Named this node "distance_publisher".
        DistancePublisher() : Node("distance_publisher")
        {
            publisher_ = this->create_publisher<std_msgs::msg::Float32>("distance_topic", 10);
            // TODO: Create a timer that calls timerCallback every 1 second
            // Initialize the random machine ONLY ONCE here to optimize performance.
            random_device rd;
            gen_ = mt19937(rd());

            timer_ = this->create_wall_timer(chrono::seconds(1), [this]() -> void {timerCallBack(); });
        }
    private:
        void timerCallBack() {
            auto msg = std_msgs::msg::Float32();
            // TODO: The random value ranges from 0.1 to 1.5 (unsigned int)
            uniform_real_distribution<float> dis(0.1f, 1.5f);
            msg.data = dis(gen_);

            publisher_ ->publish(msg);
            RCLCPP_INFO(this->get_logger(), "Publishing: %.2f m", msg.data);
        }

        // Two shared pointers used to store the publisher and timer, ensuring they persist throughout Node's operation.
        rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr publisher_;
        rclcpp::TimerBase::SharedPtr timer_;

        mt19937 gen_;
};

int main (int argc, char * argv[]) 
{
    rclcpp::init(argc, argv);
    // The spin function prevents the program from exiting immediately while continuously listening
    rclcpp::spin(std::make_shared<DistancePublisher>());
    // Ctrl + C to shutdown the program
    rclcpp::shutdown();
    return 0;
}