//header file for filter class
#ifndef _FILTER_H
#define _FILTER_H

#include "ros/ros.h"
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>
#include <iostream>
#include <cstdlib> // rand
#include <vector> 



class CFilter{

    public:
        void GetSensorData();
        float FilterData(); //uses kalman filter
        float ReturnFilterData();

    private:
        std::vector<float> _rawData;
        std::vector<float>  _filteredData;
        
};

#endif
