/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 29th, 2017, 12:00 PM
 * Purpose: Minimum/Maximum Template
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
template <class T, class V>
void min(T, V);
template <class T, class V>
void max(T, V);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int a=0;
    float b=0.0;
    
    //Initialize variables

    //Input data
    cout<<"Enter Two Numbers. Error will Occur if numbers are equal to one another."<<endl;
    cout<<"Enter an int: ";
    cin>>a;
    cout<<"Enter a float: ";
    cin>>b;
    
    //Map Inputs to Outputs or process the data
    min(a,b);
    max(a,b);
    
    //Output the transformed data

    //Exit stage right!
    return 0;
}

template <class T, class V>
void min(T n, V x){
    cout<<endl<<"Minimum Function"<<endl;
    if(n<x)
        cout<<n<<" is less than "<<x<<endl;
    else if(n==x){
        cout<<"Error!"<<endl;
    }
    else cout<<x<<" is less than "<<n<<endl;
}

template <class T, class V>
void max(T n, V x){
    cout<<endl<<"Maximum Function"<<endl;
    if(n>x)
        cout<<n<<" is greater than "<<x<<endl;
    else if(n==x){
        cout<<"Error!"<<endl;
    }
    else cout<<x<<" is greater than "<<n<<endl;
}
