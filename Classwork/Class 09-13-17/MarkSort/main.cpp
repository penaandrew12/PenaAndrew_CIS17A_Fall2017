/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on August 29th, 2017, 12:00 PM
 * Purpose: 2D_Array 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Time for RNG seed

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int *filArry(int);
void prntArry(int *,int,int);
void markSrt(int *,int);
void destroy(int *);

// Execution begins here!
int main(int argc, char* argv[]) {
    //Seed the Random Number Function with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and Initialize Variables
    int aSize=100;
    int perLine=10;
    int *array=filArry(aSize);
  
    //Print Unsorted Array
    cout<<"Unsorted Array"<<endl;
    prntArry(array,aSize,perLine);
    
    //Sort Function
    markSrt(array,aSize);
    
    //Print Sorted Array
    cout<<endl<<"Sorted Array"<<endl;
    prntArry(array,aSize,perLine);
    
    //Deallocate Memory
    destroy(array);
    
    //Exit stage right!
    return 0;
}

void destroy(int *a){
    delete []a;
}

void markSrt(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}

void prntArry(int *a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

int *filArry(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10; //Range from [10-99]
    }
    return a;
}

