/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Circle Class
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip> //Format Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "circle.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {    
    Circle circle;  //Class of Circle
    
    circle.setRadius(); //Set Radius
    
    //Output the transformed data
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The Circles Radius is "<<circle.getRadius()<<endl;
    cout<<"The Circles Area is "<<circle.getArea()<<endl;
    cout<<"The Circles Diameter is "<<circle.getDia()<<endl;
    cout<<"The Circles Circumference is "<<circle.getCircum()<<endl;
    
    //Exit stage right!
    return 0;
}