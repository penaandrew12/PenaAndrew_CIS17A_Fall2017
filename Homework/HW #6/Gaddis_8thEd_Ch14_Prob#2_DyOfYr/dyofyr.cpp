/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 15th, 2017, 11:00 AM
 * Purpose: Day of the Year Class
 */

#include <iostream> //Main Library
#include <string>   //String Library
#include <algorithm>
#include "dyofyr.h"
using namespace std;

DayOfYr::DayOfYr(){
    num=0;
}

//Pulled From Internet Don't Know if BAd code or Not PLease Not in review of HW
std::string const DayOfYr::mnth[12]={"January", "February", "March", "April",
                                     "May", "June", "July", "August",
                                     "September", "October", "November", "December"};

void DayOfYr::getDate(){
    cout<<"Assuming Year is 365 Days."<<endl;
    cout<<"Enter Number and the Corresponding Date will appear."<<endl;
    do{
        cout<<"Enter Number Now: ";
        cin>>num;
        if(num<=0||num>365){
            cout<<"Number must be between 1 and 365."<<endl;
        }
    }while(num<=0||num>365);
}

void DayOfYr::print(){
    cout<<"Number: "<<num;
    //Shows Date with Displayed Number
    if(num>0&&num<32){
        cout<<" is "<<mnth[0]<<" "<<num<<endl;
    }
    else if(num>31&&num<60){
        num-=31;
        cout<<" is "<<mnth[1]<<" "<<num<<endl;
    }
    else if(num>59&&num<91){
        num-=59;
        cout<<" is "<<mnth[2]<<" "<<num<<endl;
    }
    else if(num>90&&num<121){
        num-=90;
        cout<<" is "<<mnth[3]<<" "<<num<<endl;
    }
    else if(num>120&&num<152){
        num-=120;
        cout<<" is "<<mnth[4]<<" "<<num<<endl;
    }
    else if(num>151&&num<182){
        num-=151;
        cout<<" is "<<mnth[5]<<" "<<num<<endl;
    }
    else if(num>181&&num<213){
        num-=181;
        cout<<" is "<<mnth[6]<<" "<<num<<endl;
    }
    else if(num>212&&num<244){
        num-=212;
        cout<<" is "<<mnth[7]<<" "<<num<<endl;
    }
    else if(num>243&&num<274){
        num-=243;
        cout<<" is "<<mnth[8]<<" "<<num<<endl;
    }
    else if(num>273&&num<305){
        num-=273;
        cout<<" is "<<mnth[9]<<" "<<num<<endl;
    }
    else if(num>304&&num<335){
        num-=304;
        cout<<" is "<<mnth[10]<<" "<<num<<endl;
    }
    else if(num>334&&num<365){
        num-=334;
        cout<<" is "<<mnth[11]<<" "<<num<<endl;
    }
}