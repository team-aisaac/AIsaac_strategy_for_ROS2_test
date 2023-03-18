# AIsaac_strategy_for_ROS2_test

## 前提条件

- Ubuntu 20.04 LTS 
- ROS2 Foxy

## Setup

1. workspaceを作る[1]。

```
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
```
[1]: https://docs.ros.org/en/foxy/Tutorials/Beginner-Client-Libraries/Creating-A-Workspace/Creating-A-Workspace.html

2. ros_2ws/srcの中にソースコードを入れる。

```
git clone https://github.com/team-aisaac/AIsaac_strategy_for_ROS2_test.git
git cline https://github.com/team-aisaac/robot_command_msgs_for_AIsaac_strategy_for_ROS2_test.git
```


3. 依存関係を解決する。

```
sudo rosdep update
sudo rosdep install -i --from-path src --rosdistro foxy -y
```

4. ビルドする。

```
colcon build
```

## Tips

- fat-archive版にはcontrol-toolboxがいないので、Debian package版を使う。
    - https://docs.ros.org/en/foxy/Installation/Alternatives/Ubuntu-Install-Binary.html