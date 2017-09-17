/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on August 29th, 2017, 12:00 PM
 * Purpose: Celsius to Fahrenheit Conversion 
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
    float C=0.0f, //Celsius Input from user 
          F=0.0f; //Fahrenheit Conversion from Celsius
            
    //Input data
    cout<<"This Program will convert Celsius to Fahrenheit."<<endl;
    cout<<"Enter Celsius = ";
    cin>>C;
    
    //Map Inputs to Outputs or process the data
    F=(9.0/5)*C+32;  //Conversion Formula
    
    //Output the transformed data
    cout<<C<<" Degrees Celsius is converted to "<<F<<" Degrees Fahrenheit."<<endl;

    //Exit stage right!
    return 0;
}