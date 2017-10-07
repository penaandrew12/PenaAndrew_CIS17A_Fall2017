/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 2nd, 2017, 1:40 PM
 * Purpose: Weather Data Statistics
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
# include "WthrStatcs.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float ttl=0,    //Total Rainfall
            aMR=0,  //Average Monthly Rainfall
            aMT=0,  //Average Monthly Temperature
            hTmp=0, //Highest Temperature
            lTmp=0; //Lowest Temperature
    int size=2;    //Months Used
    float max=0,  //Max Temp
          min=0; //Min Temp
    
    wthrData *a=new wthrData[size];
    
    //Input data
    for(int i=0;i<size;i++){
        do{
        cout<<"Month "<<i+1<<". Total Rainfall(Inches) :";
        cin>>a[i].rinfll;
            if (a[i].rinfll<0){
                cout<<"Rainfall must be Greater Than or Equal to 0."<<endl;
            }
        }while(a[i].rinfll<0);
            
        do{
        cout<<"Month "<<i+1<<". Highest Temperature(Fahrenheit) :";
        cin>>a[i].hghTmp;
            if (a[i].hghTmp<-100||a[i].hghTmp>140){
                cout<<"Error! Temperature Must be Within "
                    "the Range of -100 and 140 Degrees Fahrenheit"<<endl;
            }
        if(a[i].hghTmp>max){
            max=a[i].hghTmp;
        }
        }while(a[i].hghTmp<-100||a[i].hghTmp>140);
        
        do{
        cout<<"Month "<<i+1<<". Lowest Temperature(F) :";
        cin>>a[i].lowTmp;
            if (a[i].lowTmp<-100||a[i].lowTmp>140){
                cout<<"Error! Temperature Must be Within "
                    "the Range of -100 and 140 Degrees Fahrenheit"<<endl;
            }
        if(a[i].lowTmp<min){
            min=a[i].lowTmp;
        }
        }while(a[i].lowTmp<-100||a[i].lowTmp>140);
        
        do{
        cout<<"Month "<<i+1<<". Average Temperature(F) :";
        cin>>a[i].avgeTmp;
            if (a[i].avgeTmp<-100||a[i].avgeTmp>140){  
                cout<<"Error! Temperature Must be Within "
                    "the Range of -100 and 140 Degrees Fahrenheit"<<endl;
            }
        }while(a[i].avgeTmp<-100||a[i].avgeTmp>140);
        
        cout<<endl;
    }
    
    //Total Rainfall
    for(int i=0;i<size;i++){
        ttl+=a[i].rinfll;
    }
    
    //Average Rainfall
    aMR=ttl/2;
    
    //Average of Average Monthly Temperature
    for(int i=0;i<size;i++){
        aMT+=a[i].avgeTmp;
    }
    aMT/=2;
    
    
    //Output the transformed data
    cout<<"------------------  Weather Statistics  ------------------"<<endl;
    cout<<endl;
    cout<<"Total Amount of Rainfall is "<<ttl<<" Inches"<<endl;
    cout<<"Average amount of monthly Rainfall is "<<aMR<<" Inches"<<endl;
    cout<<"Highest Temperature of the Year is "<<max<<" (F). From Month "<<endl;
    cout<<"Lowest Temperature for the Year is "<<min<<" (F). From Month "<<endl;
    cout<<"The Average Temperature of all Months is "<<aMT<<" (F)"<<endl;
    
    //Deallocate Memory
    delete []a;
    
    //Exit stage right!
    return 0;
}