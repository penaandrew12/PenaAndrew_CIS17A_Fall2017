/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 29th, 2017, 12:00 PM
 * Purpose: Total Template
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
template <class T>
void total(T,T,T);  //Total Function

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int amnt=0; //Amount of numbers
    int num=0;  //Number from user inputed
    int ttl=0;  //Total of numbers
    
    //Input data
    cout<<"Please Enter the Amount of Number User wishes to Input."<<endl;
    cin>>amnt;
    
    //Map Inputs to Outputs or process the data
    total(amnt,num,ttl);

    //Exit stage right!
    return 0;
}

template <class T>
void total(T amnt,T num,T ttl){
    num=0;
    ttl=0;
    cout<<endl<<"Enter Numbers Now: "<<endl;
    for(int i=0;i<amnt;i++){
        cin>>num;
        ttl+=num;
    }
    cout<<endl<<"Total is "<<ttl<<endl;
}