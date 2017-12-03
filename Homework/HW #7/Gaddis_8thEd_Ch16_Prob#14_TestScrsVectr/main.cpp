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

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    vector<float> v;
    int size=0;
    float input=0;
    
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
    cout<<"To Fill Array Enter any Test Scores."<<endl;
    for(int i=0;i<size;i++){
        cin>>input;
        v.push_back(input);
    }
    cout<<endl;
    
    for(int i=0;i<size;i++){
        cout<<"Test Score "<<i+1<<": ";
        cout<<v[i]<<endl;
    }
    cout<<endl;
    
    //Average of Test Scores
    float sum=0,
          average=0;
    
    for(int i=0;i<size;i++){
        sum+=v[i];
    }
    average=sum/size;
    
    cout<<endl<<"Average Test Score of all "<<size<<" Tests is "<<average<<endl;
    
    //Exit stage right!
    return 0;
}