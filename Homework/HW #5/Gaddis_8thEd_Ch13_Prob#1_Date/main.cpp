/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Date with Class
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "date.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int m=0,  //Month
        d=0,   //Day
        y=0;   //Year
    
    //Input data
    cout<<"Enter Month Now(1-12)"<<endl;
    cin>>m;
    cout<<"Enter Day of Month Now(1-31)"<<endl;
    cin>>d;
    cout<<"Enter Year Now"<<endl;
    cin>>y;

    //Map Inputs to Outputs or process the data
    cout<<endl;
    Date sDate(m,d,y);
        
    //Show Days in Year
    if(m==1){               //January
        cout<<"January has 31 Days"<<endl;
    }if(m==2){                  //February
        if(y%100==0){
            if(y%400==0){
            cout<<"Leap Year. February only has 29 Days"<<endl; 
            }
            else cout<<"This is not a Leap Year. February only has 28 Days"<<endl; 
        }
        if(!(y%100==0)){
            if(y%4==0){
            cout<<"Leap Year. February only has 29 Days"<<endl; 
            }
            else cout<<"This is not a Leap Year. February only has 28 Days"<<endl;
        }
    }if(m==3){                  //March
        cout<<"March has 31 Days"<<endl;
    }if(m==4){                  //April
        cout<<"April has 30 Days"<<endl;          
    }if(m==5){                  //May
        cout<<"May has 31 Days"<<endl;       
    }if(m==6){                  //June
        cout<<"July has 30 Days"<<endl;         
    }if(m==7){                  //July
        cout<<"June has 31 Days"<<endl;      
    }if(m==8){                  //August
        cout<<"August has 31 Days"<<endl;     
    }if(m==9){                  //September
        cout<<"September has 30 Days"<<endl;      
    }if(m==10){                 //October
        cout<<"October has 31 Days"<<endl;      
    }if(m==11){                 //November
        cout<<"November has 30 Days"<<endl;   
    }if(m==12){                 //December
        cout<<"December has 31 Days"<<endl;
    }
    
    //Output the transformed data
    sDate.date1();
    sDate.date2();
    sDate.date3();
    
    //Exit stage right!
    return 0;
}