/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Personal Information Classes
 */

#include <iostream> //Main Library
#include <string>   //String Library
#include "prsnlInfo.h"
using namespace std;

Info::Info(){
    name="";
    addrs="";
    age=0;
    num="";
}

void Info::setNme(){
    cout<<"Enter Name Now: ";
    getline(cin,name);
}

void Info::setAddrs(){
    cout<<"Enter Street Address Now: ";
    getline(cin,addrs);
}

void Info::setAge(){
    cout<<"Enter Age Now: ";
    cin>>age;
}

void Info::setNum(){
    cout<<"Enter Phone Number Now: ";
    getline(cin,num);
}
        
