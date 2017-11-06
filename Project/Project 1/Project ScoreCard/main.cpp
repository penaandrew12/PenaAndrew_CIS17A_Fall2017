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
    Name nme;
    fstream file;
    
    file.open("File Name.txt",ios::out|ios::binary);
    
    //Test for Error
    if(!file){
        cout<<"Error Opening File!"<<endl;
        return 0;
    }
    
    //Enter Name
    cout<<"Enter Player Name: ";
    getline(cin,nme.Fullname);
    
    file.write(reinterpret_cast<char *>(&nme),sizeof(nme));
    
    file.close();
    
    //Exit stage right!
    return 0;
}