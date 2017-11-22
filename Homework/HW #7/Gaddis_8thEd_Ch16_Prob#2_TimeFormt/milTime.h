/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 22nd, 2017, 12:00 PM
 * Purpose: Military Time Formatting
 */

#ifndef MilTime_H
#define MilTime_H

#include "time.h"
using namespace std;

class MilTime:public Time{
    protected:
        int milHrsMin;   //Military Hours
        int milSeconds; //Military Seconds
    public:
        MilTime();
        void setMilTime();
        void getMilHrsMin();
        void getStandHr();
};

#endif /* MilTime_H */