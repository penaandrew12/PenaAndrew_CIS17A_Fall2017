/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Feet Inches Modification from Book
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "feetInches.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int feet,inches;
    
    //Initialize variables
    FeetInches frst,scnd,thrd;
    
    //Input data
    cout<<"Feet: ";
    cin>>feet;
    cout<<"Inches: ";
    cin>>inches;
    
    //Map Inputs to Outputs or process the data
    frst.setFeet(feet);
    frst.setInches(inches);
    
    thrd=frst;
    cout<<"First + Second = "<<thrd.getFeet()<<" feet,"
            " "<<thrd.getInches()<<" inches."<<endl;
    
    cout<<"Operator <= "<<endl;
    if(feet<=inches){
        cout<<"Feet is Less Than or Equal to Inches"<<endl;
    }
    else
        cout<<"Feet is Greater Than or Equal to Inches"<<endl;
    
    cout<<"Operator >= "<<endl;
    if(feet>=inches){
        cout<<"Feet is Greater Than or Equal to Inches"<<endl;
    }
    else
        cout<<"Feet is Less Than or Equal to Inches"<<endl;
    
    cout<<"Operator != "<<endl;
    if(feet!=inches){
        cout<<"Feet is Not Equal to Inches"<<endl;
    }
    else
        cout<<"Feet is Equal to Inches"<<endl;
    
    //Exit stage right!
    return 0;
}