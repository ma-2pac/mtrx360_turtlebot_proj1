#include "CLidar.h"


double CLidar::LaserCallback(const sensor_msgs::LaserScan& msg){

    //message members: http://docs.ros.org/melodic/api/sensor_msgs/html/msg/LaserScan.html 
    
    //example for how to access members
    float min_angle = msg.angle_min;

}