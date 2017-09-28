/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 21rst, 2017, 11:00 AM
 * Purpose: Pointer Rewrite Practice
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
int doSmthng(int *,int *);  //Do Something Function

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int a=0,    //User Input Variable A
        b=0,    //User Input Variable B
        smthng=0;   //Something
    
    //Initialize variables
    cout<<"This Program will take in two numbers multiply them by ten then add them together."<<endl;
    cout<<"This Program is more to rewrite pointers instead of references just for practice."<<endl;
    cout<<"Enter a value now = ";
    cin>>a;
    
    cout<<"Enter b value now = ";
    cin>>b;

    //Map Inputs to Outputs or process the data
    smthng=doSmthng(&a,&b);

    //Output the transformed data
    cout<<"Something 'a' times 10 + 'b' times 10 = "<<smthng<<endl;
    
    //Exit stage right!
    return 0;
}

int doSmthng(int *x,int *y){
    //Declare all Variables
    int temp=*x;
    *x=*y*10;
    *y=temp*10;
    
    return *x+*y;
}