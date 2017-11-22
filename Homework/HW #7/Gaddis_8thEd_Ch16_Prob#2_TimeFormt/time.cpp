/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 22nd, 2017, 12:00 PM
 * Purpose: Time Class From Book
 */

#include "time.h"
using namespace std;

Time::Time(){
    hour=0;
    min=0;
    sec=0;
}

Time::Time(int h, int m, int s){
    hour=h;
    min=m;
    sec=s;
}

Time::getHour()const{
    return hour;
}
        
Time::getMin()const{
    return min;
}
        
Time::getSec()const{
    return sec;
}