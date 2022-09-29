// Source file for filter object

#include "CFilter.h"

void CFilter::AssignLidarPointer(CLidar* pLidar){
    _pLidar=pLidar;
}

void CFilter::GetSensorData(){
    _rawData.push_back(_pLidar->LaserCallback);
}