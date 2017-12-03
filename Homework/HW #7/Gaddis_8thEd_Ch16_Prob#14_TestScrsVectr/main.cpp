/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 3rd, 2017, 11:00 PM
 * Purpose: Test Scores with vectors
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <vector>   //STL Vector Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
void markSrt(int *,int);    //Sorting Function
int avrgeScre(int *,int);   //Average Function

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    vector<int> v;
    int size=0;
    
    //Input data
    do{
    cout<<"Enter the Amount of Test Scores you wish to compare."<<endl;
    cin>>size;
        if (size<=0){
            cout<<"Must input a number greater than 0."<<endl;
        }
    }while(size<=0);
    cout<<endl;
    
    //Fill Array
    for(int i=0;i<size;i++){
        cout<<"Test Score "<<i+1<<": ";
        v.push_back(i);
    }
    cout<<endl;
    
    //Average of Test Scores
    float sum=0;
    for(int i=0;i<v.size();i++){
    sum=sum+v[i];
    }
    
    cout<<endl<<"Average Test Score of all "<<sum<<" Tests is "<<sum<<endl;
    
    //Exit stage right!
    return 0;
}