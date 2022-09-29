
#ifndef _OBJECT_DETECTOR_H
#define _OBJECT_DETECTOR_H

#include "Cfilter.h"


class CObjectDetector{
    public:
        CObjectDetector(){
            BUFFER_SIZE=50;
        }
        float PublishFilterData();
    private:
        CFilter Filter;
        const int BUFFER_SIZE;
        double _dataBuffer[BUFFER_SIZE];

};
#endif