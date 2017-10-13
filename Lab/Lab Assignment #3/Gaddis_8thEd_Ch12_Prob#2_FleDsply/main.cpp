/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 10th, 2017, 11:00 AM
 * Purpose: File Header Program Challenge 
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
    string input;   //Hold info in File
    string nme;     //File Name
    int count=0;
    
    //Get File Name
    cout<<"User can input files via name."<<endl;
    cout<<"File Name is 'file.txt'."<<endl;
    cout<<"Enter File Name Now: "<<endl;
    getline(cin,nme);
    
    //Open File
    file.open(nme.c_str(), ios::in);
    
    //Show File
    if(nme=="file.txt"){
        if(file){
        cout<<endl<<"24 Lines of the File will be displayed."<<endl<<endl;
        getline(file,input,'1');
        while(true){
            if(file.eof()){ 
                break;
            }
                cout<<input;
                getline(file,input,'1');
                count++;
                if(count==24){
                cout<<endl<<endl<<"Press Enter to show more Code";
                cin.ignore();
                count=0;
                }
            }
        cout<<endl<<endl<<"The Entire File is Displayed."<<endl;
        }
    }
    
    else{ cout<<nme<<" is not a correct file name."<<endl;
    cout<<"Name must be exact in order to open.(include .txt part)"<<endl;
    }
    
    //Close File
    file.close();

    //Exit stage right!
    return 0;
}