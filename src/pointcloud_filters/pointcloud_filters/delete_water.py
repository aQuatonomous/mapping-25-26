# Node to delete water plane form pointcloud
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
import sensor_msgs_py.point_cloud2 as pc2
import numpy as np
import struct
class DeleteWaterNode(Node):
    def __init__(self):
        super().__init__('delete_water_node')
        self.subscription = self.create_subscription(
            PointCloud2,
            '/pointcloud_in',
            self.pointcloud_callback,
            10)
        self.publisher = self.create_publisher(
            PointCloud2,
            '/pointcloud_no_water',
            10)

    def pointcloud_callback(self, msg):
        # Convert PointCloud2 to list of points
        points = list(pc2.read_points(msg, skip_nans=True))
        
        # Filter out points below a certain z threshold (e.g., water level)
        water_level_threshold = 0.1  # Adjust this value as needed
        filtered_points = [point for point in points if point[2] > water_level_threshold]
        
        # Create new PointCloud2 message
        header = msg.header
        fields = msg.fields
        new_msg = pc2.create_cloud(header, fields, filtered_points)
        
        # Publish the filtered point cloud
        self.publisher.publish(new_msg)

