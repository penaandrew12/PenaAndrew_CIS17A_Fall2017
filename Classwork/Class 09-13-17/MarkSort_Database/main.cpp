/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on August 29th, 2017, 12:00 PM
 * Purpose: Array 
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
int *filIndx(int);
void prntArry(int *,int,int);
void prntArry(int *,int *,int,int);
void markSrt(int *,int *,int);
void destroy(int *);

// Execution begins here!
int main(int argc, char** argv) {
    //Seed the Random Number Function with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and Initialize Variables
    int aSize=100;
    int perLine=10;
    int *array=filArry(aSize);
    int *index=filIndx(aSize);
    
    cout<<"Before Sort"<<endl;
    prntArry(array,aSize,perLine);
    prntArry(index,aSize,perLine);
    
    //Sort Function
    markSrt(array,aSize,perLine);
    
    //Input data/variables
    cout<<endl<<"After Sort"<<endl;
    prntArry(array,aSize,perLine);
    prntArry(index,aSize,perLine);
    prntArry(array,index,aSize,perLine);
    
    //Deallocate Memory
    destroy(array);
    destroy(index);
    
    //Exit stage right!
    return 0;
}

void destroy(int *a){
    delete []a;
}

void markSrt(int *a,int *indx,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[indx[i]]>a[indx[j]]){
                a[indx[i]]=a[indx[i]]^a[indx[j]];
                indx[j]=indx[i]^indx[j];
                indx[i]=indx[i]^indx[j];
            }
        }
    }
}

void prntArry(int *a,int *indx,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[indx[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntArry(int *a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

int *filIndx(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        a[i]=i;
    }
    return a;
}

int *filArry(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10; //Range from [10-99]
    }
    return a;
}

