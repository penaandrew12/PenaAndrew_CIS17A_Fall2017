/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Car Class
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "car.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {    
    //Declare Variable
    Car car;    //Car Class
    int choice; //Choice
    
    car.setYr();    //Set Car Year
    car.setMake();  //Set Car Make
    car.setSpd();   //Set Car Speed
    
    //Output the transformed data
    cout<<endl;
    cout<<"The Car is a "<<car.getYr()<<" "<<car.getMake()<<endl;
    cout<<"It is currently Going at "<<car.getSpd()<<" MPH."<<endl;
    
    cout<<"Now Lets Take A little Drive."<<endl;
    cout<<"Enter 1 to Accelerate by 5 MPH or 2 to Brake by 5 MPH"<<endl; //Changed Part from book. Book asked to go five
                                                                         //times accelerate then stop 5 times. Decided to let user choice
    for(int i=0;i<5;i++){ //Loop for Car to Accelerate or Slow Down
        cout<<endl;
        cin>>choice;
        if(choice==1){
            cout<<"Car is Accelerating."<<endl;
            car.acclte();
        }
        if(choice==2){
            cout<<"Car is Braking."<<endl;
            car.brake();
        }
        else cout<<"Car will not Move."<<endl;
    
    cout<<"Current Speed is "<<car.getSpd()<<endl;
    }
    
    //Exit stage right!
    return 0;
}