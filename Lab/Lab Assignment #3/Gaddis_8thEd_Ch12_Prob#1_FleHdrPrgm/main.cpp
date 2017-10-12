/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 10th, 2017, 11:00 AM
 * Purpose: File Header Program Challenge 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <fstream> //Stream Library for Reading & Writing Files

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
void shwCntts(fstream &);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    fstream file1,
            file2;
    string fleNme;
    ofstream file;
    
    //Initialize variables
    cout<<"This Program will Display the First Ten Lines of the file."<<endl;
    cout<<"There are two Files. One Labeled 'Header 1' while the Other is 'Header 2'."<<endl;
    cout<<"Enter the name of a File you wish to see: ";
    getline(cin,fleNme);
    
    file.open(fleNme.c_str());
    
    file.close();
    
    //Open file
    file1.open("Header 1.txt",ios::in);
    file2.open("Header 2.txt",ios::in);
    
    //Show Contents of File which user Picked
    cout<<endl;
    cout<<"File 1 Contents"<<endl;
    shwCntts(file1);


    //Close File
    file1.close();
    file2.close();

    //Exit stage right!
    return 0;
}

void shwCntts(fstream &file){
    string line;
    getline(file,line,'#');
    while(file){
        cout<<line;
        getline(file,line,'#');
    }
    cout<<endl;
}