/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 16th, 2017, 12:00 PM
 * Purpose: Number Days Class
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "timeOff.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    NumDays d;

    //Output the transformed data
    d.getNumDays();
    d.print();
    
    //Exit stage right!
    return 0;
}