/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Circle Class
 */

#include <iostream>
#include "circle.h"
using namespace std;

Circle::Circle(){   //Constructor
    radius=0.0f;
    pi=3.14159;
}

void Circle::setRadius(){
    cout<<"Enter Radius of Circle: ";
    cin>>this->radius;
}