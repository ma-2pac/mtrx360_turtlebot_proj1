//header file for filter class
#ifndef _FILTER_H
#define _FILTER_H

#include "ros/ros.h"
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>
#include <iostream>
#include <cstdlib> // rand
#include <vector> 

#include "CObjectDetector.h"

class CObjectDetector;

class CFilter{

    public:
        void AssignDetectorPointer(CObjectDetector* pCObjectDetector);
        void GetSensorData();
        void FilterData(); //uses kalman filter
        double ReturnFilterData();

    private:
        CObjectDetector* _pCObjectDetector;
        std::vector<double> _rawData;
        std::vector<double>  _filteredData;
        
};

#endif
