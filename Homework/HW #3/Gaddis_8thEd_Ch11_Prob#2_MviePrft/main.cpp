/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 2nd, 2017, 1:40 PM
 * Purpose: Movie Data with Structures  
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip> //Format Library
#include <string>   //String Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "MData.h"

//Global Constants
 
//Function Prototype;
float prft(float, float);
void shwData(string, string, int, int);

// Execution begins here!
int main(int argc, char** argv) {  
    //Declare Variable
    MData d;  //Data Structure
    float pft; //Profit
    
    
    //Input Data
    cout<<"Only Enter Title of Movie you will understand (1 word only)"<<endl;
    cout<<"Title Name"<<endl;
    cin>>d.ttl;
    cout<<"Director Last Name"<<endl;
    cin>>d.drctNme;
    cout<<"Year Movie was released"<<endl;
    cin>>d.year;
    cout<<"Run Time in minutes"<<endl;
    cin>>d.runTme;
    cout<<"Movie's Production Cost"<<endl;
    cout<<"$";
    cin>>d.cst;
    cout<<"Movie's first-year revenue"<<endl;
    cout<<"$";
    cin>>d.rvnue;
    
    cout<<endl;
    shwData(d.ttl,d.drctNme,d.year,d.runTme);
    pft=prft(d.cst,d.rvnue);
    cout<<endl<<"The Profit of the Movie is $"<<pft<<endl;
    
    //Exit Stage Right!
    return 0;
}
float prft(float cst,float rvnue){
    float prft;
    prft=rvnue-cst;
    return prft;
}

void shwData(string ttl,string drctNme,int year,int runTme){
    //Show Data
    cout<<"Title Name"<<" / Director Name"<<setw(10)
            <<" / Movie Release date"<<setw(10)<<" / Run Time(min)"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<ttl<<setw(13)<<drctNme<<setw(14)<<year<<setw(19)<<runTme<<endl;  
}