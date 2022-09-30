// Source file for filter object

#include "CFilter.h"

void CFilter::AssignLidarPointer(CObjectDetector* pCObjectDetector){
    _pCObjectDetector=pCObjectDetector;
}

void CFilter::GetSensorData(){
    //_rawData.push_back(_pCObjectDetector->LaserCallback);
}