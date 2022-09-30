// Author: KoopaTroopas
// Date of Last Update: 26/09/2022

#ifndef CWHEELMOTOR_HPP
#define CWHEELMOTOR_HPP


class CWheelMotor
{
    private:
        /* data */
    public:
        CWheelMotor(/* args */);
        ~CWheelMotor();

        int rotateRightWheel(int rpm);
        int rotateLeftWheel(int rpm);

};





#endif