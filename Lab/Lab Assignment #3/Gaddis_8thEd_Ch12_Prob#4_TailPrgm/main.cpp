/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 10th, 2017, 11:00 AM
 * Purpose: File Tail Program Challenge 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <fstream> //Stream Library for Reading & Writing Files
#include <string> //String Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables 
    fstream file;   //File Stream Object
    string input,   //Hold info in File
           nme;     //File Name

    //Get File Name
    cout<<"User inputs name of file."<<endl;
    cout<<"File name is 'file.txt'."<<endl;
    cout<<"This Program will Show Only the Last Ten lines of the File."<<endl;
    cout<<"Enter File Name Now: "<<endl;
    getline(cin,nme);
    
    //Open File
    file.open(nme.c_str(), ios::in);
 
    //Show Last Ten Lines of Code
    file.seekp(-41L, ios::end);
    cout<<input;
    while(file){
        getline(file,input,'#');
        cout<<input;
    }
    
    
    //Close File
    file.close();

    //Exit stage right!
    return 0;
}