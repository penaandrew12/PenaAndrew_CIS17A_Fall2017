/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Car Class
 */

#include <iostream>
#include "car.h"
using namespace std;

Car::Car(){
    yrModl=0;
    make="";
    speed=0;
}

void Car::setYr(){
    cout<<"Enter Year of Car Made: ";
    cin>>this->yrModl;
}

void Car::setMake(){
    cout<<"Enter The Make of The Car: ";
    cin.ignore();
    getline(cin,make);
}

void Car::setSpd(){
    cout<<"Enter The Speed of The Car in MPH: ";
    cin>>this->speed;
}

int Car::acclte(){
    speed+=5;
    return speed;
}

int Car::brake(){
    speed-=5;
    return speed;
}