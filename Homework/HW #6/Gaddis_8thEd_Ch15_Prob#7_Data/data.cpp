/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Personal and Customer Data
 */

#include <iostream>
#include <string>
#include "data.h"
using namespace std;

PrsnData::PrsnData(){
    lstNme=" ";
    frstNme=" ";
    addrss=" ";
    city=" ";
    state=" ";
    zip=0;
    phne=0;
}

CstmrData::CstmrData(){
    cstmrNum=0;
    status=true;
}

void CstmrData::setData(){
    cout<<"Last Name: ";
    getline(cin,lstNme);
    cout<<"First Name: ";
    getline(cin,frstNme);
    cout<<"Address: ";
    getline(cin,addrss);
    cout<<"City: ";
    getline(cin,city);
    cout<<"State: ";
    getline(cin,state);
    cout<<"Zip: ";
    cin>>zip;
    cout<<"Phone Number: ";
    cin>>phne;
    cin.clear();
    cout<<"Customer Number: ";
    cin>>cstmrNum;
}

bool CstmrData::mailingLst(){
    int ans=0;
    cout<<"Do you wish to be on the mailing list?"<<endl;
    cout<<"Type 1 for Yes or 2 for No."<<endl;
    cin.clear();
    cin>>ans;
    
    if(ans==1){
        status;
    }
    if(ans==2){
        status=false;
    }
    return status;
}

void CstmrData::getData(){
    cout<<"----------------------------------------"<<endl;
    cout<<"Customer Information"<<endl;
    cout<<frstNme<<" "<<lstNme<<endl;
    cout<<"Customer Number: "<<cstmrNum<<endl;
    cout<<addrss<<", "<<city<<", "<<state<<", "<<zip<<endl;
    cout<<"Phone Number: "<<phne<<endl;
    if(status==true)
        cout<<"You Are on the Mailing List"<<endl;
    else
        cout<<"You Are not on the Mailing List"<<endl;
}