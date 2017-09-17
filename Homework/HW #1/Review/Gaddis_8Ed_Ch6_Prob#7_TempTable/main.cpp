/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on August 29th, 2017, 12:00 PM
 * Purpose: Temperature Table
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Format Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
float Temp(float);

// Execution begins here!
int main(int argc, char** argv) {
     //Declare all Variables
    float F=0,  //Function Test
          Fahr=0; //Fahrenheit
          
    do{
    cout<<endl<<"Enter Fahrenheit to Convert to Celsius."<<endl;      
    cin>>Fahr;
    if(Fahr<0){
        cout<<"Temperature must be at least 0 Degrees to convert."<<endl;
    }
    }while(Fahr<0);
    
    //Draw from Function
    cout<<"Fahrenheit       Celsius"<<endl;
    cout<<"------------------------"<<endl;
    F=Temp(Fahr);
    
    //Exit stage right!
    return 0;
}

float Temp(float t){
    float C; //Celsius
    for(float F=0;F<=t;F++){
    C=(5*(F-32))/9;  //Celsius Conversion from Fahrenheit
    cout<<setw(5)<<F<<setw(19)<<C<<endl;
    }
    return C;
}