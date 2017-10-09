/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 2nd, 2017, 1:40 PM
 * Purpose: Soccer Scores  
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string>   //String Library
#include <iomanip>  //Format Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
# include "SccrPlyrs.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int ttl=0,  //Total Points Earned for Team
        topPnts=0, //Top Points Earned by one Player
        topNum=0;   //Top Player Team Number
    string topFNme, //Top Player First Name 
           topLNme; //Top Player Last Name
    const int size=3;  //Amount of Soccer Players
            
    ScrPlys *a=new ScrPlys[size]; //Allocated Array

    //Input data on Soccer PLayers
    for(int i=0;i<size;i++){
    cout<<"Player "<<i+1<<" First Name : ";
    cin>>a[i].frstNme;
    cout<<"Player "<<i+1<<" Last Name : ";
    cin>>a[i].lstNme;
    do{
        cout<<"Player "<<i+1<<" Number :";
        cin>>a[i].plrNum;
            if (a[i].plrNum<0){
                cout<<"Player Number must be Greater than or Equal to 0"<<endl;
            }
        }while(a[i].plrNum<0);
        
    do{
    cout<<"Player "<<i+1<<" Points Scored :";
    cin>>a[i].scrPnts;
        if (a[i].scrPnts<0){
            cout<<"Points Scored must be Greater than or Equal to 0"<<endl;
        }
    
    if(a[i].scrPnts>topPnts){
        topPnts=a[i].scrPnts;
        topFNme=a[i].frstNme;
        topLNme=a[i].lstNme;
        topNum=a[i].plrNum;
    }
    
    ttl+=a[i].scrPnts;
    }while(a[i].scrPnts<0);
    cout<<endl;
    }

    //Output the transformed data
    cout<<setw(5)<<"Soccer Team Cheat Sheet"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Player # / Points Scored / First Name / Last Name"<<endl;
    
    cout<<endl<<"If two or more Players earned the same amount of most Points."<<endl;
    cout<<"Total Points earned by the team is "<<ttl<<" Points."<<endl;
    cout<<topFNme<<" "<<topLNme<<" Number "<<topNum<<" Earned the most "
            "Points with a total of "<<topPnts<<endl;
    
    //Deallocate Memory
    delete []a;
    
    //Exit stage right!
    return 0;
}