/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 16th, 2017, 12:00 PM
 * Purpose: Number Days Class
 */

#include <iostream>
#include "numdays.h"
using namespace std;

NumDays::NumDays(){
    hrs=0;
    days=0;
}

void NumDays::print(){
    cout<<"Enter Hours Worked: ";
    cin>>hrs;
    days=hrs/8;
    cout<<"Days: "<<days<<endl;
}
NumDays NumDays::operator+(){
    NumDays newN;
    newN.days=days+hrs;
    cout<<"Overloaded Operator + : "<<newN.days<<endl;
}

NumDays NumDays::operator-(){
    NumDays newN;
    newN.days=days-hrs;
    cout<<"Overloaded Operator - : "<<newN.days<<endl;
}

NumDays NumDays::operator++(){
    NumDays newN;
    newN.days+=days+hrs;
    cout<<"Overloaded Operator ++ : "<<newN.days<<endl;
}

NumDays NumDays::operator--(){
    NumDays newN;
    newN.days-=days-hrs;
    cout<<"Overloaded Operator -- : "<<newN.days<<endl;
}