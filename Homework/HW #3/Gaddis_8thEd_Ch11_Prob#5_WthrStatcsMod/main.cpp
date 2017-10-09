/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 2nd, 2017, 1:40 PM
 * Purpose: Weather Data Statistics
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist
enum Mnth {January, Feburary, March, April,
            May, June, July, August,
            September, October, November, December};

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
          lTmp=0, //Lowest Temperature
          max=-100,  //Max Temp
          min=140; //Min Temp
    int hMnth=0,  //Counter for Month Highest
        lMnth=0;  //Counter for Month Lowest
    wthrData *a=new wthrData[12]; //Allocated Array
    
    //Total Rainfall
    for(int i=January;i<December;i++){
        do{
        cout<<"Month "<<i+1<<". Total Rainfall(Inches) :";
        cin>>a[i].rinfll;
            if (a[i].rinfll<0){
                cout<<"Rainfall must be Greater Than or Equal to 0."<<endl;
            }
        ttl+=a[i].rinfll;
        }while(a[i].rinfll<0);
        //Average Rainfall
        aMR=ttl/2;
            
        //High Temperature
        do{
        cout<<"Month "<<i+1<<". Highest Temperature(Fahrenheit) :";
        cin>>a[i].hghTmp;
            if (a[i].hghTmp<-100||a[i].hghTmp>140){
                cout<<"Error! Temperature Must be Within "
                    "the Range of -100 and 140 Degrees Fahrenheit"<<endl;
            }
                if(a[i].hghTmp>max){
                    max=a[i].hghTmp;
                    hMnth=i+1;
                }
        }while(a[i].hghTmp<-100||a[i].hghTmp>140);
        
        //Low Temperature
        do{
        cout<<"Month "<<i+1<<". Lowest Temperature(F) :";
        cin>>a[i].lowTmp;
            if (a[i].lowTmp<-100||a[i].lowTmp>140){
                cout<<"Error! Temperature Must be Within "
                    "the Range of -100 and 140 Degrees Fahrenheit"<<endl;
            }
                if(a[i].lowTmp<min){
                    min=a[i].lowTmp;
                    lMnth=i+1;
                }
        }while(a[i].lowTmp<-100||a[i].lowTmp>140);
        
        //Average Temperature
        do{
        cout<<"Month "<<i+1<<". Average Temperature(F) :";
        cin>>a[i].avgeTmp;
            if (a[i].avgeTmp<-100||a[i].avgeTmp>140){  
                cout<<"Error! Temperature Must be Within "
                    "the Range of -100 and 140 Degrees Fahrenheit"<<endl;
            }
        aMT+=a[i].avgeTmp;
        }while(a[i].avgeTmp<-100||a[i].avgeTmp>140);
        //Average of Average Monthly Temperature
        aMT/=2;
    
        cout<<endl;
    }
    
    //Output the transformed data
    cout<<"------------------  Weather Statistics  ------------------"<<endl;
    cout<<endl;
    cout<<"Total Amount of Rainfall is "<<ttl<<" Inches"<<endl;
    cout<<"Average amount of monthly Rainfall is "<<aMR<<" Inches"<<endl;
    cout<<"Highest Temperature of the Year is "<<max<<" (F). From Month "<<hMnth<<endl;
    cout<<"Lowest Temperature for the Year is "<<min<<" (F). From Month "<<lMnth<<endl;
    cout<<"The Average Temperature of all Months is "<<aMT<<" (F)"<<endl;
    
    //Deallocate Memory
    delete []a;
    
    //Exit stage right!
    return 0;
}