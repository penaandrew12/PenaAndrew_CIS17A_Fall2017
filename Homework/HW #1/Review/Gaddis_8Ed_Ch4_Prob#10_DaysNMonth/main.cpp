/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 15, 2017, 12:00 PM
 * Purpose: Days in Month Identifier
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int mnth=0, //Month
        yr=0;   //Year

    //Initialize variables
    do{
    cout<<"Enter Month Now (1-12) = ";
    cin>>mnth;
    
    if (mnth<1||mnth>12){
        cout<<"Must Enter a Month between 1 and 12."<<endl;
    }
    
    }while (mnth<1||mnth>12);   //Loop continues until User Enters Number between 1 and 12
    
    do{
    cout<<"Enter the Year Now = ";
    cin>>yr;
    if (yr<0){
        cout<<"Must Enter a Year After or During Year 0."<<endl;
    }
    }while (yr<0);      //Loop continues until User Enters Number during or after year 0
    
    //Map Inputs to Outputs or process the data 
    if (mnth==1){                   //January
        cout<<"31 Days"<<endl;   
    
    }if (mnth==2){                  //February
        if (yr%100==0){
            if (yr%400==0){
            cout<<"Leap Year. 29 Days"<<endl; 
            }
            else cout<<"28 Days"<<endl; 
        }
        
        if (!(yr%100==0)){
            if (yr%4==0){
            cout<<"Leap Year. 29 Days"<<endl; 
            }
            else cout<<"28 Days"<<endl;
        }
        
    }if (mnth==3){                  //March
        cout<<"31 Days"<<endl;
        
    }if (mnth==4){                  //April
        cout<<"30 Days"<<endl;  
        
    }if (mnth==5){                  //May
        cout<<"31 Days"<<endl;
        
    }if (mnth==6){                  //June
        cout<<"30 Days"<<endl;  
        
    }if (mnth==7){                  //July
        cout<<"31 Days"<<endl;
        
    }if (mnth==8){                  //August
        cout<<"31 Days"<<endl;
        
    }if (mnth==9){                  //September
        cout<<"30 Days"<<endl;
        
    }if (mnth==10){                 //October
        cout<<"31 Days"<<endl;
        
    }if (mnth==11){                 //November
        cout<<"30 Days"<<endl;
        
    }if (mnth==12){                 //December
        cout<<"31 Days"<<endl;
    }
    
    //Exit stage right!
    return 0;
}