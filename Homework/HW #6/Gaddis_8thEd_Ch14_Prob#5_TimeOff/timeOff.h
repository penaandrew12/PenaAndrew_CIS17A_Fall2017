/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 16th, 2017, 12:00 PM
 * Purpose: Number Days Class
 */

#ifndef timeOff_H
#define timeOff_H

#include <string>
#include "timeOff.h"
using namespace std;

class NumDays{
    private:
        string fllNme;  //Full Name
        int id;         //Employee ID
        float hrs;      //Hours
        float days;     //Days
        int mxSckDays;  //Max Sick Days
        int SckTkn;     //Sick Days Taken
        int mxVactn;    //Max Vacation Days
        int vacTkn;     //Vacation Taken
        int mxUnpid;    //Max Unpaid Days
        int unpidTkn;   //Unpaid Days Taken
    public:
        NumDays();
        void getNumDays();
        void print();
};

#endif /* timeOff_H */

