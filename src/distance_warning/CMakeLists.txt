cmake_minimum_required(VERSION 3.8)
project(distance_warning)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)

# --START UPDATE
find_package(rosidl_default_generators REQUIRED)  #Translation factory

rosidl_generate_interfaces(${PROJECT_NAME} # Submit order
  "srv/SetThreshold.srv"
  "action/CheckDistance.action"
)

# Compile the .cpp file into an executable file named 'distance_publisher'
add_executable(distance_publisher src/distance_publisher.cpp)
# Embed the necessary ROS 2 libraries (rclcpp, std_msgs) into the executable file
ament_target_dependencies(distance_publisher rclcpp std_msgs)
# Save the executable file to the 'install/lib' directory so that the 'ros2 run' command can find it
install(TARGETS distance_publisher DESTINATION lib/${PROJECT_NAME})

# Compile the .cpp file into an executable file named 'distance_listener'
add_executable(distance_listener src/distance_listener.cpp)
# Embed the necessary ROS 2 libraries (rclcpp, std_msgs) into the executable file
ament_target_dependencies(distance_listener rclcpp std_msgs)
# Save the executable file to the 'install/lib' directory so that the 'ros2 run' command can find it
install(TARGETS distance_listener DESTINATION lib/${PROJECT_NAME})

# Compile the .cpp file into an executable file named 'set_threshold_service'
add_executable(set_threshold_service src/set_threshold_service.cpp)
# Embed the necessary ROS 2 libraries (rclcpp, std_msgs) into the executable file
ament_target_dependencies(set_threshold_service rclcpp)
# Linking C++ libraries allows the code to understand the data structure of the Service file (.srv)
rosidl_target_interfaces(set_threshold_service ${PROJECT_NAME} "rosidl_typesupport_cpp")
install(TARGETS set_threshold_service DESTINATION lib/${PROJECT_NAME})

add_executable(distance_action_server src/distance_action_server.cpp)
ament_target_dependencies(distance_action_server rclcpp rclcpp_action)
rosidl_target_interfaces(distance_action_server ${PROJECT_NAME} "rosidl_typesupport_cpp")
install(TARGETS distance_action_server DESTINATION lib/${PROJECT_NAME})

add_executable(distance_action_client src/distance_action_client.cpp)
ament_target_dependencies(distance_action_client rclcpp rclcpp_action)
rosidl_target_interfaces(distance_action_client ${PROJECT_NAME} "rosidl_typesupport_cpp")
install(TARGETS distance_action_client DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})
# --END UPDATE

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
