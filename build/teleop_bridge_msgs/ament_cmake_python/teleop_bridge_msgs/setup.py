from setuptools import find_packages
from setuptools import setup

setup(
    name='teleop_bridge_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('teleop_bridge_msgs', 'teleop_bridge_msgs.*')),
)
