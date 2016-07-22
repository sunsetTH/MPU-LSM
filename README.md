#RTIMULib2 for the MPU9250 and LSM9D0/1 only
- Files pertaining to all other IMU's, pressure, and humidity sensors originally in RTIMULib2 have been removed
- Working on cutting down remaining code to bare minimum needed to get sensor fused data (accelerations, angular rates, and euler angles)
- Will be integrating with a nonlinear control scheme for quadrotor using a optical flow camera with the Intel Edison
- Eventually code will be used on an Up-Board, integrating one of the above IMU's, an Intel Realsense depth camera, and an optical flow camera as peripherals
- Goal is to have a working semi-autonomous quadrotor. Give it a direction and speed and it will go in given direction while avoiding obstacles it detects using the realsense camera
