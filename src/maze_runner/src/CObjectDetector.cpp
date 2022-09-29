#include "CObjectDetector.h"


void CObjectDetector::getRawLidarData(){

    //add the detected reading from laser callback to buffer
   _dataBuffer.push_back(Lidar.LaserCallback);
   
}