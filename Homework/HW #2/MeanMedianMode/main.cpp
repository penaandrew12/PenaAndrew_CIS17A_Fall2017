/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 21rst, 2017, 11:00 AM
 * Purpose: Mean Median and Mode Problem
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
int mode(int *,int);
void markSrt(int *,int);

// Execution begins here!
int main(int argc, char** argv) {
    //Seed the Random Number Function with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=0;  //Size of Array
    int line=5; //How many numbers on a line at one time
    
    //Input data
    do{
    cout<<"Enter the number amount of randomly produced integers for the array."<<endl;
    cout<<"The Array will only use numbers from 1 through 5 for RNG."<<endl;
    cin>>size;
        if (size<=1){
            cout<<"Must input a number greater than 1."<<endl;
        }
    }while(size<=1);
    
    //Dynamically Allocated Array
    int *array=filArry(size);
    
    //Show Array
    cout<<endl<<"Non-Sorted Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
        if(i%line==(line-1))cout<<endl;
    }

    cout<<endl<<"Sorted Array"<<endl;
    markSrt(array,size);
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
        if(i%line==(line-1))cout<<endl;
    }
            
    //Mode of Array
    cout<<endl<<"If there are multiple numbers that appear the same amount of times the First one is Used"<<endl;
    mode(array,size);
    
    //Delete Array
    delete[] array;
    
    //Exit stage right!
    return 0;
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

int mode(int *array,int size){
    //Declare all Variables
    int count=1,
        max=0,
        mode=array[0];
    int freq=0;     //Frequency of Mode appearing
    float sum=0,    //Average
          med=0;    //Median
    
    
    //Mode
    for(int i=0;i<size-1;i++){
        if(array[i]==array[i+1]){
        count++;        //counts when found
            if(count>max){
                max=count;
                mode=array[i];
            }
        } else
        count=1; //resets counter when found
    }
    
    //Mean
    for(int i=0;i<size;i++){
    sum=sum+array[i];
    }
    sum=sum/size;
    
    //Median
    if(size%2!=0){
        med=array[size/2];
    }
    else med=(array[size/2]+array[(size/2-1)])/2;
    
    //Counter for frequency of mode
    for(int i=0;i<size;i++){
    if (array[i]==mode)
    freq++;
    }
    
    cout<<"The mode is "<<mode<<endl;
    cout<<mode<<" Showed up "<<freq<<" Times"<<endl;
    cout<<"The Mean of all numbers in the array is "<<sum<<endl;
    cout<<"The Median of The Array is "<<med<<endl;
}

int *filArry(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        *(a+i)=rand()%5+1; //Range from [1-5]
    }
    return a;
}