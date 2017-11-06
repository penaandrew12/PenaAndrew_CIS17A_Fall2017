/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 31, 2017, 12:00 PM
 * Purpose: Project
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string>
#include <fstream>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "name.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char *argv[]){
    //Wrtie To
    Name nme;
    fstream filew;
    
    filew.open("File Name.txt",ios::in|ios::out|ios::binary);
    
    
    //Enter Name
    cout<<"Enter Player Name: ";
    cin.getline(nme.Fullname,size);
    
    filew.write(reinterpret_cast<char *>(&nme),sizeof(nme));
    
    cout<<"Name in File"<<endl;
    filew.read(reinterpret_cast<char *>(&nme),sizeof(nme));
    
    cout<<"Name: ";
    cout<<nme.Fullname<<endl;
    
    filew.close();
    
    //Exit stage right!
    return 0;
}