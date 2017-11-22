/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 22nd, 2017, 12:00 PM
 * Purpose: Military Time Formatting
 */

#include <iostream>
#include <iomanip>
#include "milTime.h"
using namespace std;

MilTime::MilTime(){
    milHrsMin=0;
    milSeconds=0;
}

void MilTime::setMilTime(){
    try{
    cout<<"Enter Military Hour and Minute Now(2359): ";
    cin>>milHrsMin;
        if(milHrsMin<0||milHrsMin>2359){
            throw 99;
        }
    }catch(int x){
        cout<<"Error Code Number: "<<x<<endl;
        cout<<"Military Time Must be between 0 and 2359."<<endl;
        return;
    }
   
        
    try{
    cout<<"Enter Military Seconds Now(59): ";
    cin>>milSeconds;
        if(milSeconds<0||milSeconds>59){
            throw 100;
        }
    }catch(int x){
        cout<<"Error Code Number: "<<x<<endl;
        cout<<"Military Time Seconds Must be between 0 and 59."<<endl;
        return;
    }
}

void MilTime::getMilHrsMin(){
    float milTime;
    milTime=milHrsMin+(milSeconds/100);
    cout<<"Military Time: "<<milTime<<"."<<milSeconds<<endl;
}

void MilTime::getStandHr(){
    int StndTme=0;
    int min=0;
    int hour=0;
    
    //Time for Above 0 and Less Than 1200
    if(milHrsMin>=0&&milHrsMin<1200){
        hour=milHrsMin/100;
        min=(milHrsMin)%100;
        if(min>59){
            cout<<"Error in Military Minute Spot"<<endl;
        }
        if(hour==0){
            hour=12;
        }
        cout<<"Standard Time is "<<hour<<":";
        if(min==0){
            cout<<setfill('0')<<setw(2)<<min;
        }
        else
            cout<<min;
        cout<<"."<<milSeconds<<" AM"<<endl;
    }
    
    //Noon 12pm
    if(milHrsMin>=1200&&milHrsMin<1300){
    hour=milHrsMin/100;
        min=(milHrsMin)%100;
        if(min>59){
            cout<<"Error in Military Minute Spot"<<endl;
        }
        if(hour==0){
            hour=12;
        }
        cout<<"Standard Time is "<<hour<<":";
        if(min==0){
            cout<<setfill('0')<<setw(2)<<min;
        }
        else
            cout<<min;
        cout<<"."<<milSeconds<<" PM"<<endl;
    }
    
    //Time for Above 1300 and Less Than 2400
    if(milHrsMin>=1300&&milHrsMin<2400){
        hour=(milHrsMin-1200)/100;
        min=(milHrsMin)%100;
        if(min>59){
            cout<<"Error in Military Minute Spot"<<endl;
        }
        cout<<"Standard Time is "<<hour<<":";
        if(min==0){
            cout<<setfill('0')<<setw(2)<<min;
        }
        else
            cout<<min;
        cout<<"."<<milSeconds<<" PM"<<endl;
    }
}