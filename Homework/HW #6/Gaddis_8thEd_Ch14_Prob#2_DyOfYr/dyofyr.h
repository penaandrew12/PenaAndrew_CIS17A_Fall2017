/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 15th, 2017, 11:00 AM
 * Purpose: Day of the Year Class Header
 */

#ifndef DYOFYR_H
#define DYOFYR_H

#include <string>
using namespace std;

class DayOfYr{
    protected: 
        int num; //Inputed Number to translate to Day in year
        static std::string const mnth[12]; //String for Month Names
    public:
        DayOfYr();  //Constructor
        void getDate();  //Determining Month and Day
        void print();   //Print Function
};

#endif /* DYOFYR_H */

