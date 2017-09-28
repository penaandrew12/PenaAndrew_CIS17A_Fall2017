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
void markSrt(int *,int);    //Sort Function
float avrgeScre(int *,int); //Average Function

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
    cout<<"Sorted Array from Lowest to Highest Test Score."<<endl;
    cout<<"The Lowest Test Score will be Dropped from The List."<<endl;
    for(int i=0;i<num;i++){
        cout<<array[i]<<endl;
    }
    
    //Average of Test Scores
    sum=avrgeScre(array,num);
    
    cout<<"The Lowest Test Score will not be used in determining the Average."<<endl;
    cout<<endl<<"Average Test Score is "<<sum<<endl;
    
    //Output the transformed data

    //Delete Array
    delete[] array;
    
    //Exit stage right!
    return 0;
}

float avrgeScre(int *a,int n){
    float sum=0;
    
    //Find Lowest Score
    int low=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<low){
        low=a[i];
        }
    }
    
    //Average of Tests
    for(int i=0;i<n;i++){
    sum=sum+a[i];
    }
    sum=sum-low;
    n=n-1;
    sum=sum/n;
    cout<<"Score = "<<sum<<" Test = "<<n<<endl;
    
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