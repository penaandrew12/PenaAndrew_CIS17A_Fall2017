/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Car Class
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
using namespace std;

class Car{
    private:
        int yrModl; //Year of Model for Car
        string make;    //Make of Car
        int speed;  //Current Speed
    
    public:
        Car();
        void setYr();
        void setMake();
        void setSpd();
        
        int getYr(){
            return yrModl;}
        string getMake(){
            return make;}
        int getSpd(){
            return speed;}
        
        int acclte();
        int brake();
    
};

#endif /* CIRCLE_H */

