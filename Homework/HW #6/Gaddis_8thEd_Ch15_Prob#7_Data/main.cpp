/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Personal and Customer Data
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "data.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    CstmrData data;

    //Output the transformed data
    data.setData();
    data.mailingLst();
    data.getData();
    
    //Exit stage right!
    return 0;
}