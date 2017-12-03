/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on December 3rd, 2017, 12:00 PM
 * Purpose:  
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "intArry.h"
//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;
    
    //Initialize variables 
    IntArray table(SIZE);

    //Map Inputs to Outputs or process the data
    for(int i=0;i<SIZE;i++)
        table[i]=(i*2);
    
    //Output the transformed data
    for(int i=0;i<SIZE;i++)
        cout<<table[i]<<" ";
    cout<<endl<<"Next part shows exception if subscript doesn't work"<<endl;
    table[SIZE+1]=0;
    
    //Exit stage right!
    return 0;
}