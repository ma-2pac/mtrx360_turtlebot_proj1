#ifndef _OBJECT_DETECTOR_H
#define _OBJECT_DETECTOR_H

#include "CFilter.h"

const int BUFFER_SIZE=50;

class CObjectDetector{
    public:
        float PublishFilterData();
    private:
        CFilter Filter;
        double _dataBuffer[BUFFER_SIZE];

};
#endif