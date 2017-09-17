/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on August 29th, 2017, 12:00 PM
 * Purpose: CPP Template  
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Format Library
#include <cmath>    //Math Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f; //Conversion to Percent

//Function Prototype
float FutureVal(float,float,float);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare all Variables
    float fv=0, //Future Value
          ir=0, //Interest Rate
          mnths=0, //Year
          pv=0; //Present Value
          
    cout<<"Enter Present Value in $/s"<<endl;      
    cin>>pv;
    cout<<"Enter Interest Rate"<<endl;      
    cin>>ir;
    cout<<"Enter the number of months"<<endl;      
    cin>>mnths;
    
    cout<<fixed<<setprecision(2)<<endl;
    ir=ir/PERCENT;
    
    //Draw from Function
    fv=FutureVal(pv,ir,mnths);
    cout<<"The Future Value of "<<pv<<" at "<<ir*PERCENT<<"%, in "<<mnths<<" months is $"<<fv<<endl;

    //Exit stage right!
    return 0;
}

float FutureVal(float a,float b,float c){
    float d;
    d=a*(pow((1+b),c));
    return d;
}