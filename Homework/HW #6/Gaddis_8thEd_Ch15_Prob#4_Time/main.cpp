/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Time Formatting
 */

//System Libraries
#include <iostream>

#include "time.h"
#include "milTime.h" //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    MilTime mt;

    //Output the transformed data
    mt.setMilTime();
    mt.getMilHrsMin();
    mt.getStandHr();
    
    //Exit stage right!
    return 0;
}