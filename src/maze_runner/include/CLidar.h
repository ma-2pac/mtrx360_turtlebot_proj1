#ifndef _LIDAR_H
#define _LIDAR_H

#include <sensor_msgs/LaserScan.h>
#include "ros/ros.h"
#include <iostream>

class CLidar{

    public:
        double LaserCallback(const sensor_msgs::LaserScan& msg);
};
#endif