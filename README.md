# AIsaac_strategy_for_ROS2_test

## Setup

1. workspaceを作る[1]。

```
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
```
[1]: https://docs.ros.org/en/foxy/Tutorials/Beginner-Client-Libraries/Creating-A-Workspace/Creating-A-Workspace.html

2. ros_2ws/srcの中に入れる。

```
git clone https://github.com/team-aisaac/AIsaac_strategy_for_ROS2_test.git
git cline https://github.com/team-aisaac/robot_command_msgs_for_AIsaac_strategy_for_ROS2_test.git
```

3. ビルドする。

```
colcon build
```
