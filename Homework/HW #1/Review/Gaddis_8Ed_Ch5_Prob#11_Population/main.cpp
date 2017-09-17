/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 15, 2017, 5:00 PM
 * Purpose: Population Prediction
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip> //Format Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f; //Conversion for Percentage

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float strt=0,   //Starting Number of organisms
          avg=0,    //Average Daily Population Increase
          days=0,   //Number of Days they Will Multiply
          Ttl=0,    //Total Number of Organisms
          Perc=0;   //Percentage Increase (Daily)
            
    
    //Initialize variables
    do{
    cout<<"Starting number of organisms = ";
    cin>>strt;
    if(strt<2){
        cout<<"Invalid Starting Number. Number must be greater than 2."<<endl;
    }
    }while (strt<2);
    cout<<endl;
    
    do{
    cout<<"Average Daily Population Increase (In Percentage %) = ";
    cin>>avg;
    if(avg<0){
    cout<<"Invalid Increase Number. Number must be greater than 0."<<endl;
    }
    }while(avg<0);
    cout<<endl;
    
    do{
    cout<<"Number of Days they Will Multiply = ";
    cin>>days;
    if(days<1){
        cout<<"Invalid Days Number. Days must be greater than 1."<<endl;
    }
    }while (strt<1);
    cout<<endl;
             
    Perc=(avg/PERCENT);
    
    cout<<"Day 1. Total Organisms "<<strt<<endl;
    
    //Loop to Display Days and Size
    for (int i=0;i<days;i++){
        Ttl=strt*(1*(Perc));
        Ttl=Ttl+strt;
        strt=Ttl;
        cout<<setprecision(2)<<fixed;
        cout<<"Day "<<i+2<<". Total Organisms "<<Ttl<<endl;
    }

    //Exit stage right!
    return 0;
}