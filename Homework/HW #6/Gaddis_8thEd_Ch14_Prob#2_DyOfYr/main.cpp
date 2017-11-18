/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 15th, 2017, 11:00 AM
 * Purpose: Day of the Year Class
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "dyofyr.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    DayOfYr d;

    //Output the transformed data
    d.getDate();
    d.print();
    
    //Exit stage right!
    return 0;
}