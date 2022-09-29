//header file for filter class
#ifndef _FILTER_H
#define _FILTER_H

#include "ros/ros.h"
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>
#include <iostream>
#include <cstdlib> // rand
#include <vector> 

#include "CLidar.h"

class CLidar;

class CFilter{

    public:
        void AssignLidarPointer(CLidar* pLidar);
        void GetSensorData();
        float FilterData(); //uses kalman filter
        float ReturnFilterData();

    private:
        CLidar* _pLidar;
        std::vector<double> _rawData;
        std::vector<double>  _filteredData;
        
};

#endif
