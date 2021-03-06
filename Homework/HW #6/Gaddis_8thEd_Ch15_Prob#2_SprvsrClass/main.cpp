/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Employee and Production Worker Classes
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string>   //String Library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "emplyeProd.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    Suprvsr s;
    
    //Output the transformed data
    s.setInfo();
    s.setSlry();
    s.dsply();
    
    //Exit stage right!
    return 0;
}