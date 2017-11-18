/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Employee and Production Worker Classes
 */

#include <iostream> //Main Library 
#include <string>   //String Library 
#include "emplyeProd.h"    //E&P Header File
using namespace std;

Emplye::Emplye(){
    nme=" ";
    num=0;
    hreDte=0;
}

void PrdctWrkr::setInfo(){
    cout<<"Employee Name: ";
    getline(cin,nme);
    
    do{
    cout<<"Employee Number: ";
    cin>>num;
        if(num<0){
            cout<<"Employee Number Must be More than or equal to 0"<<endl;
        }
    }while(num<0);
    
    do{
    cout<<"Hire Date(MM/DD/YY): ";
    cin>>hreDte;
        if(hreDte<10000||hreDte>99999){
            cout<<"Date Must Be In Format (MM/DD/YY)"<<endl;
        }
    }while(hreDte<10000||hreDte>99999);
}

PrdctWrkr::PrdctWrkr(){
    shft=0;
    payRte=0.0;
}

void PrdctWrkr::setWrkDay(){
    do{
    cout<<"Shift 1 is Day. Shift 2 is Night."<<endl;
    cout<<"Please Enter Shift Worked Now: ";
    cin.clear();
    cin>>shft;
    if(shft<1||shft>2){
        cout<<"Shift Must Be Either 1 or 2"<<endl;
    }
    }while(shft<1||shft>2);
    
    do{
    cout<<"Enter Hourly Pay Rate: ";
    cin>>payRte;
        if(payRte<0){
            cout<<"Hourly Pay Rate Must be More than or equal to 0"<<endl;
        }
    }while(payRte<0);
}

void PrdctWrkr::dsply(){
    cout<<endl<<"---------------------------------"<<endl;
    cout<<"Employee Name: "<<nme<<endl;
    cout<<"Employee Number: "<<num<<endl;
    cout<<"Hired on "<<hreDte<<endl;
    if(shft==1){
        cout<<"Worked During the Day "<<endl;
    }
    else
         cout<<"Worked at Night"<<endl;
    cout<<"Gets Payed "<<payRte<<" an Hour"<<endl;
}