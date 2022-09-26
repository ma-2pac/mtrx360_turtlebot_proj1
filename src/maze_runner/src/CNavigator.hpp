// Author: KoopaTroopas
// Date of Last Update: 26/09/2022

#ifndef CNAVIGATOR_HPP
#define CNAVIGATOR_HPP

#include "CMovement.hpp"

class CNavigator
{

private:
    CMovement _movement;

    // Current direction variable in 10 degrees increment
    int _currentDirection;

    int _nextMove;

    int nextMove();

    // Place holder for object detector
public:
    CNavigator(/* args */);
    ~CNavigator();
};





#endif