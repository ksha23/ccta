import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kyle/Documents/ros2_bridge/install/teleop_controller_bridge'
