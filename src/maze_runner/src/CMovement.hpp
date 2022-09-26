// Author: KoopaTroopas
// Date of Last Update: 26/09/2022

#ifndef CMOVEMENT_H
#define CMOVEMENT_H


#include "CWheelMotor.hpp"

class CMovement
{
private:
    CWheelMotor _wheelMotors;
public:
    CMovement(/* args */);
    ~CMovement();

    
    int moveTurtle(int movementCode);
};


#endif