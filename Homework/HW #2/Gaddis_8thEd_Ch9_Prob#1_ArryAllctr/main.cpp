/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 21rst, 2017, 11:00 AM
 * Purpose: Array of Dynamically Allocated Integers
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Time for RNG seed

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
int *filArry(int);

// Execution begins here!
int main(int argc, char** argv) {
    //Seed the Random Number Function with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=0,  //Length of Array   
        line=5; //Line for Array to split
    
    //Size of Array
    do{
    cout<<"Enter the number amount of randomly produced integers for the array."<<endl;
    cout<<"The Array will only use numbers from 1 through 30 for RNG."<<endl;
    cin>>size;
        if (size<=1){
            cout<<"Must input a number greater than 1."<<endl;
        }
    }while(size<=1);
    
    //Dynamically Allocated Array
    int *array=filArry(size);
    
    //Show Array
    cout<<endl<<"Non-Sorted Array of RNG Integers"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
        if(i%line==(line-1))cout<<endl;
    }

    //Delete Array
    delete[] array;
    
    //Exit stage right!
    return 0;
}
int *filArry(int size){
    int *array=new int[size];
    for(int i=0;i<size;i++){
        *(array+i)=rand()%20+1; //Range from [1-20]
    }
    return array;
}