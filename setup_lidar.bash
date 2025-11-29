#!/bin/bash
source install/setup.bash
export AMENT_PREFIX_PATH=$PWD/install:$AMENT_PREFIX_PATH
echo "Lidar workspace sourced. AMENT_PREFIX_PATH updated."
