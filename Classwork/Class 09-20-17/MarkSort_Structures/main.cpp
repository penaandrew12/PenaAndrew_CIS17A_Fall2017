/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 20th, 2017, 1:50 PM
 * Purpose: Sorting Array with structure
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Time for RNG seed

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Array.h"

//Global Constants

//Function Prototypes
Array *filArry(int);
void prntArry(Array *,int);
void markSrt(Array *);
void destroy(Array *);

// Execution begins here!
int main(int argc, char* argv[]) {
    //Seed the Random Number Function with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and Initialize Variables
    int aSize=100;
    int perLine=10;
    Array *array=filArry(aSize);
  
    //Print Unsorted Array
    cout<<"Unsorted Array"<<endl;
    prntArry(array,perLine);
    
    //Sort Function
    markSrt(array);
    
    //Print Sorted Array
    cout<<endl<<"Sorted Array"<<endl;
    prntArry(array,perLine);
    
    //Deallocate Memory
    destroy(array);
    
    //Exit stage right!
    return 0;
}

void destroy(Array *a){
    delete []a->data;
    delete a;
}

void markSrt(Array *a){
    for(int i=0;i<a->size-1;i++){
        for(int j=i+1;j<a->size;j++){
            if(a->data[i]>a->data[j]){
                a->data[i]=a->data[i]^a->data[j];
                a->data[j]=a->data[i]^a->data[j];
                a->data[i]=a->data[i]^a->data[j];
            }
        }
    }
}

void prntArry(Array *a,int perLine){
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

Array *filArry(int n){
    Array *a=new Array;
    a->size=n;
    a->data=new int[a->size];
    for(int i=0;i<a->size;i++){
        a->data[i]=rand()%90+10; //Range from [10-99]
    }
    return a;
}

