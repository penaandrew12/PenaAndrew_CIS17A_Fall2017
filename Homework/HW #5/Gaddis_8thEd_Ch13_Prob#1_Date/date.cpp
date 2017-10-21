/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Date with Class
 */

#include "date.h"
#include <iostream>
using namespace std;

Date::Date(){
    mnth=0, day=0, year=0;
}

Date::Date(int m, int d, int y){
    mnth=m; day=d; year=y;
}

void Date::setDy(int d){
    if(d<1&&d>31)
        cout<<"Invalid Date. Date must in between 1 and 31."<<endl;
    else day = d;
}

void Date::setMnth(int m){
    if(m<1&&m>12)
        cout<<"Invalid Month. Month Must be in between 1 and 12."<< endl;
    else mnth = m;	
}

void Date::setYr(int y){
    if (y < 0 && y > 99999)
        cout << "Must be from 0 to 99999" << endl;
    else year = y;
}

void Date::date1(){
    cout<<mnth<<" / "<<day<<" / "<<year<<endl;
}

void Date::date2(){
    cout<<mnthNme[mnth - 1]<<" "<<day<<", "<<year<<endl;
}

void Date::date3(){
    cout<<day<<" "<<mnthNme[mnth - 1]<<" "<<year<<endl;
}

