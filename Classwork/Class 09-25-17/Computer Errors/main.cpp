/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 25th, 2017, 12:00 PM
 * Purpose: Computer Errors (Primitive Data Types)
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float sum, frac;
    unsigned int nLoops=4000000000;
    float result;
    
    //Initialize variables
    frac=0.1f;
    sum=0;

    //Input data
    for (int i=0;i<nLoops;i++){
        sum+=frac;
    }
    result=nLoops*frac;
    
    //Map Inputs to Outputs or process the data
    cout<<"The Sum of "<<frac<<" = "<<nLoops<<endl;
    cout<<"The Answer = "<<result<<endl;
    cout<<"The Percentage Error = "<<(result-sum)/result*100<<"% "<<endl;
    
    //Output the transformed data

    //Exit stage right!
    return 0;
}