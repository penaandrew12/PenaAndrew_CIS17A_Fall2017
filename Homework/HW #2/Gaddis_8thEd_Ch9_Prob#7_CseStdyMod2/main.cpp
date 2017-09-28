/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 21rst, 2017, 11:00 AM
 * Purpose: Following Exactly from Book to Fix Already Made Program
 * The Problem was Really Bad with the Sorting so used a different one 
 * that works ten times better
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
void markSrt(int *,int);    //Sorting Function
void showArray(int *,int);  //Show Array Function

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int num=0;  //Length of Array

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
    cout<<"Please round Donations to the Dollar"<<endl;
    int *don=new int[num];
    for(int i=0;i<num;i++){
        cout<<"Donation "<<i+1<<": $";
        cin>>don[i];
    }
    cout<<endl;
    
    //Non-Sorted Array
    cout<<"The donations in not sorted order"<<endl;
    showArray(don,num);
    
    //This will display them in sorted order
    cout<<"The donations, sorting in ascending order"<<endl;
    markSrt(don,num);
    showArray(don,num);
    
    //Output the transformed data

    //Delete Array
    delete[] don;
    
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

void showArray(int *arr,int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}