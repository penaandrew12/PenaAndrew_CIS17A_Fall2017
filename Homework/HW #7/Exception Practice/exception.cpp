/* 
 * File:   main.cpp
 * Author: rcc
 * Created on November 22, 2017, 11:22 AM
 * Purpose: Exception
 */

#include <iostream>
#include "exception.h"
using namespace std;

Excptn::Excptn(){
    mnth=0;
}

void Excptn::thrw(){
    try{
        cout<<"Enter Month Now: ";
        cin>>mnth;
        
        if(mnth<0||mnth>12){
            throw 99;
        }
        else cout<<"Month: "<<mnth<<endl;
            
    }catch(int x){
        cout<<"Month Cannot be Less Than or Equal to 0 or "
                "Greater Than 12. Error Number: "<<x<<endl;
    }
}