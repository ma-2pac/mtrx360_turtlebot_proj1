#ifndef _OBJECT_DETECTOR_H
#define _OBJECT_DETECTOR_H

#include <vector>

#include "CFilter.h"

const int BUFFER_SIZE=50;

class CObjectDetector{
    public:
        double getRawLidarData();
        double getFilteredLidarData();
        void PublishFilterData();
    private:
        CFilter Filter;
        CLidar  Lidar;
        std::vector<double>_dataBuffer;
        int _bufferIndex;

};
#endif