/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Personal Information Classes
 */

//System Libraries
#include <iostream>
#include "prsnlInfo.h" //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const int num=3;    //Number of People on List
    Info list[num]={};  //Information Class

    //Output the transformed data
    for(int i=0;i<num;i++){
        cout<<"Person "<<i+1<<endl;
        list[i].setNme();
        list[i].setAddrs();
        list[i].setAge();
        cin.ignore();
        list[i].setNum();
        cout<<endl;
    }
    
    cout<<"Personal information List"<<endl<<endl;
    for(int i=0;i<num;i++){
        cout<<list[i].getNme()<<endl;
        cout<<list[i].getAddrs()<<endl;
        cout<<list[i].getAge()<<endl;
        cout<<list[i].getNum()<<endl;
        cout<<endl;
    }

    //Exit stage right!
    return 0;
}