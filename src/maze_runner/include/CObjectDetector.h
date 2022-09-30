#ifndef _OBJECT_DETECTOR_H
#define _OBJECT_DETECTOR_H

#include <vector>

#include "CFilter.h"
#include "CLidar.h"


const int BUFFER_SIZE=50;

class CObjectDetector{
    public:
        void getRawLidarData();
        void getFilteredLidarData();
        void PublishFilterData();
        void ReadingClassifcation(); //classify lidar readings as either forward, side or back
    private:
        CFilter Filter;
        CLidar  Lidar;
        std::vector<double>_dataBuffer;
        int _bufferIndex;

};
#endif