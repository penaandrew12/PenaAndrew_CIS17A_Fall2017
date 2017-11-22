/* 
 * File:   date.h
 * Author: Andrew Pena
 * Created on November 22nd, 2017, 8:47 PM
 * Purpose: Date with Class
 */

#include <iostream> //Main Library
#include <string> //String Library
#include "date.h"
using namespace std;

Date::Date(){
    mnth=0, day=0, year=0;
}

std::string const Date::mnthNme[12]={"January", "February", "March", "April",
                                     "May", "June", "July", "August",
                                     "September", "October", "November", "December"};

Date::Date(int m, int d, int y){
    mnth=m; day=d; year=y;
}

void Date::setDy(int d){
    day=d;
}

void Date::setMnth(int m){
    mnth=m;
}

void Date::setYr(int y){
    year=y;
}

void Date::date1(){
    cout<<mnth<<" / "<<day<<" / "<<year<<endl;
}

void Date::date2(){
    cout<<mnthNme[mnth-1]<<" "<<day<<", "<<year<<endl;
}

void Date::date3(){
    cout<<day<<" "<<mnthNme[mnth-1]<<" "<<year<<endl;
}