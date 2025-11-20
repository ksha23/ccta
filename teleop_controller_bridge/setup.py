from pathlib import Path
from setuptools import setup, find_packages

package_name = "teleop_controller_bridge"

asset_root = Path(package_name) / "ccta_assets"
asset_files = []
if asset_root.exists():
    for path in asset_root.rglob("*"):
        if path.is_file():
            asset_files.append(str(path.relative_to(package_name)))

setup(
    name=package_name,
    version="0.1.0",
    packages=find_packages(include=[package_name, f"{package_name}.*"]),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        ("lib/" + package_name, ["scripts/ccta_teleop_controller"]),
    ],
    install_requires=["setuptools"],
    include_package_data=True,
    zip_safe=True,
    maintainer="Kyle",
    maintainer_email="kyle@example.com",
    description="ROS2 bridge that wraps the CCTA teleoperation safety controller.",
    license="BSD-3-Clause",
    tests_require=["pytest"],
    package_data={package_name: asset_files},
    entry_points={
        "console_scripts": [
            "ccta_teleop_controller = teleop_controller_bridge.ccta_bridge_node:main",
        ],
    },
)
