/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on December 3rd, 2017, 12:00 PM
 * Purpose:  
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cstdlib> //Random numbers
#include <ctime>   //Time to set the Seed
#include <algorithm>    //std::sort
#include <vector>   //STL Vector Library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "smpleVectr.h"

//Global Constants

//Function Prototype
void bubbleSort(SmpleVectr<int> &);

// Execution begins here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=10;
    SmpleVectr<int> intTable(SIZE);
    
    //Map Inputs to Outputs or process the data
    for(int i=0;i<SIZE;i++){
        intTable[i]=rand()%30+1;;
    }
    
    //Output the transformed data
    cout<<"RNG Array with Vectors"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<intTable[i]<<" ";
    }
    cout<<endl;

    //Sort
    bubbleSort(intTable);
    
    cout<<"Sorted Array with Vectors"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<intTable[i]<<" ";
    }
    
    //Exit stage right!
    return 0;
}

void bubbleSort(SmpleVectr<int> &a){
    bool swap = true;
    while(swap){
        swap = false;
        for (size_t i = 0; i < a.size()-1; i++) {
            if (a[i]>a[i+1] ){
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swap = true;
            }
        }
    }
}