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
    cout<<"User can choose from two Files."<<endl;
    cout<<"File 1 is 'file1.txt' or File 2 is 'file2.txt'."<<endl;
    cout<<"Enter File Name Now: "<<endl;
    getline(cin,nme);
    
    //Open File
    file.open(nme.c_str(), ios::in);
    
    //Show File
    if(nme=="file1.txt"){
        if(file){
        cout<<endl<<nme<<" contents will now be displayed."<<endl;
        getline(file,input,'#');
            while(file){
                cout<<input;
                count++;
                getline(file,input,'#');
                if(count>9){
                    cout<<endl<<"Only The First Ten Lines will Only be Displayed"<<endl;
                    break;
                    getline(file,input,'#');
                }
            }
        if(count<=9){
           cout<<endl<<"The Entire File is Displayed."<<endl;
        }
        }
    }
    
    else if(nme=="file2.txt"){
        if(file){
        cout<<endl<<nme<<" contents will now be displayed."<<endl;
        getline(file,input,'#');
            while(file){
                cout<<input;
                count++;
                getline(file,input,'#');
                if(count>9){
                    cout<<endl<<"Only The First Ten Lines will Only be Displayed"<<endl;
                    break;
                    getline(file,input,'#');
                }
            }
        if(count<=9){
           cout<<endl<<"The Entire File is Displayed."<<endl;
        }
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