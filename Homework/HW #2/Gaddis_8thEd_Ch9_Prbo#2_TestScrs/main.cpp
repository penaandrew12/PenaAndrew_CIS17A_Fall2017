/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 21rst, 2017, 11:00 AM
 * Purpose: Test Scores 
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
void markSrt(int *,int);    //Sorting Function
int avrgeScre(int *,int);   //Average Function

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int num=0;  //Length of Array
    float sum=0;    //Average Sum of All Test Scores
    
    //Input data
    do{
    cout<<"Enter the Amount of Test Scores you wish to compare."<<endl;
    cin>>num;
        if (num<=0){
            cout<<"Must input a number greater than 0."<<endl;
        }
    }while(num<=0);
    cout<<endl;
    
    //Fill Array
    int *array=new int[num];
    for(int i=0;i<num;i++){
        cout<<"Test Score "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<endl;
    
    //Sort Function
    markSrt(array,num);
    
    //Show Sorted Array
    cout<<"Sorted Array from Lowest to Highest Test Score"<<endl;
    for(int i=0;i<num;i++){
        cout<<array[i]<<endl;
    }
    
    //Average of Test Scores
    sum=avrgeScre(array,num);
    
    cout<<endl<<"Average Test Score of all "<<num<<" Tests is "<<sum<<endl;
    
    //Output the transformed data

    //Delete Array
    delete[] array;
    
    //Exit stage right!
    return 0;
}

int avrgeScre(int *a,int n){
    float sum=0;
    
    for(int i=0;i<n;i++){
    sum=sum+a[i];
    }
    sum=sum/n;
    
    return sum;
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