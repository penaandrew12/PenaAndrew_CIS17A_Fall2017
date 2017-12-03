/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on December 3rd, 2017, 12:00 PM
 * Purpose:  
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <vector>   //STL Vector Library
#include<bits/stdc++.h> 
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "smpleVectr.h"
#include "srchVectr.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;
    int result;
    
    //Input data
    SrchbleVectr<int> intTable(SIZE);
    
    //Map Inputs to Outputs or process the data
    for(int i=0;i<SIZE;i++){
        intTable[i]=(i*2);
    }
    
    //Output the transformed data
    cout<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<intTable[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Searching..."<<endl;
    int num=20;
    int min = 0;
    int max = (SIZE-1); // last index value 
    int guess;
    
    while (min <= max){
        guess = (int)(((max + min) / 2) + 0.5);
        if (num == intTable[guess]){
            cout<<"Number Found!"<<endl;
            break;
        }else if (intTable[guess] < num) {
            min = guess + 1;
        }else {
            max = guess - 1;
        }
        
        if(max==guess)
        cout<<"Number Not Found!"<<endl;
    }
    
    //Exit stage right!
    return 0;
}