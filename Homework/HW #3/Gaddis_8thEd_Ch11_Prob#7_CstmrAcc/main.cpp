/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on August 29th, 2017, 12:00 PM
 * Purpose: Customer Account Information 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string> //String Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "CstmrInfo.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv){
    //Declare Variables
    int size=0;
    char choice;
    
    //Size of Array
    cout<<"Enter the amount of Costumers you wish to have on the account list : ";
    cin>>size;
    
    
    //Allocated Array
    info *a=new info[size];
    
    //Show Menu and Loop
    do{
        //Display Menu
        cout<<endl<<endl<<"Type Anything Else to Exit"<<endl;
        cout<<"Type 1 to fill in Customer Information"<<endl;
        cout<<"Type 2 to see Customer Information."<<endl;
        cout<<"Type 3 to make any corrections to Customer Information."<<endl<<endl;
        
    //Input Choice
    cin>>choice;
    cout<<endl;
            
    switch(choice){
        
        //Inputing Customer Information
        case '1':{
            //Enter Information
            for(int i=0;i<size;i++){
                cout<<"Customer : "<<i+1<<endl;
                cout<<"Name : ";
                cin.ignore();
                getline(cin,a[i].name);
                cout<<"Address : ";
                getline(cin,a[i].addrsNme);
                cout<<"City : ";
                getline(cin,a[i].city);
                cout<<"State : ";
                getline(cin,a[i].state);
                cout<<"Zip Code : ";
                cin>>a[i].areaCde;
                cout<<"Telephone Number (XXX)XXX-XXXX (Enter given number alone) : ";
                cin>>a[i].phneNum;
                cout<<"Account Balance : ";
                cin>>a[i].accntBal;
                cout<<"Date of Last Payment MMDDYR: ";
                cin>>a[i].lPayDte;
                cout<<endl;
            }
            
            break;
            }
        
        //Customer Information
        case '2':{
            cout<<endl<<"Customer Information Display"<<endl<<endl;

            //Customer Info Display
            for(int i=0;i<size;i++){
                cout<<"Customer : "<<i+1<<endl;
                cout<<"Name : "<<a[i].name<<endl;
                cout<<"Address : "<<a[i].addrsNme<<endl;
                cout<<"City : "<<a[i].city<<endl;
                cout<<"State : "<<a[i].state<<endl;
                cout<<"Zip Code : "<<a[i].areaCde<<endl;
                cout<<"Telephone Number : "<<a[i].phneNum<<endl;
                cout<<"Account Balance : "<<a[i].accntBal<<endl;
                cout<<"Date of Last Payment : "<<a[i].lPayDte<<endl;
                cout<<endl;
            }

            break;
            }
            
        //Fixing Contents of Array Structure
        case '3':{
            cout<<"This Section will Let you Fix Any Customer Information."<<endl;
            
            break;
        }
        
        //Exit Program
        default:{
                cout<<"Exit the Program"<<endl;
            }
        }
        
    }while(choice>='1'&&choice<='3');    
        
    //Exit stage right!
    return 0;
}