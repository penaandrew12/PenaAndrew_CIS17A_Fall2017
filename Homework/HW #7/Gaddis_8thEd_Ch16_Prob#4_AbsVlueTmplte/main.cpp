/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 29th, 2017, 12:00 PM
 * Purpose: Absolute Value Template
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cmath>    //Math library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
template <class N>
void absVlue(N num);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int num=0;
    
    //Input data
    cout<<"Enter an int number= ";
    cin>>num;
   
    //Output the transformed data
    absVlue(num);
    
    //Exit stage right!
    return 0;
}

template <class N>
void absVlue(N n){
    n=abs(n);
    cout<<n<<endl;
}