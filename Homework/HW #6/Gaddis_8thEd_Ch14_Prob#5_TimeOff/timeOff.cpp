/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 16th, 2017, 12:00 PM
 * Purpose: Number Days Class
 */

#include <iostream>
#include <string>
#include "timeOff.h"
using namespace std;

NumDays::NumDays(){
    fllNme=" ";
    id=0;
    hrs=0;
    days=0;
    mxSckDays=0;
    SckTkn=0;
    mxVactn=0;
    vacTkn=0;
    mxUnpid=0;
    unpidTkn=0;
}

void NumDays::getNumDays(){
    cout<<"Full Name: ";
    getline(cin,fllNme);
    cout<<"Employee ID: ";
    cin>>id;
    cout<<"Max Sick Days Taken: ";
    cin>>mxSckDays;
    do{
    cout<<"Max Vacation Days Taken: ";
    cin>>mxVactn;
    if(mxVactn>30){
        cout<<"Max Vacation Days Can not be Over 30 Day."<<endl;
    }
    }while(mxVactn>30);
    
    cout<<"Max Unpaid Days Taken: ";
    cin>>mxUnpid;
    cout<<"Enter Hours Worked: ";
    cin>>hrs;
    cout<<"Enter Sick Time Taken(Days): ";
    cin>>SckTkn;
    cout<<"Enter Vacation Time Taken(Days): ";
    cin>>vacTkn;
    cout<<"Enter Unpaid Time Taken(Days): ";
    cin>>unpidTkn;
}

void NumDays::print(){
    cout<<endl<<"-------------------------------"<<endl;
    cout<<fllNme<<" Employee Id #"<<id<<endl;
    cout<<"You Have "<<mxSckDays-SckTkn<<" Days of Sick Time Left."<<endl;
    cout<<"You Have "<<mxVactn-vacTkn<<" Days of Vacation Time Left."<<endl;
    cout<<"You Have "<<mxUnpid-unpidTkn<<" Days of Unpaid Time Left."<<endl;
    
    //Days Worked
    days=hrs/8;
    cout<<"You Have Worked for "<<days<<" Business Days."<<endl;
}