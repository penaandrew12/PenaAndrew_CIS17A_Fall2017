/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 10th, 2017, 11:00 AM
 * Purpose: Punch Line Joke
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <fstream> //Stream Library for Reading & Writing Files
#include <string> //String Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
void joke(fstream &);
void pnch(fstream &);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    fstream file1,   //File Stream Object
            file2;   //File Stream Object
    string input;   //Hold info in File
    
    //Open File
    file1.open("joke.txt", ios::in);
    file2.open("punch line.txt", ios::in);

    joke(file1);
    pnch(file2);

    //Close Files
    file1.close();
    file2.close();
    
    //Exit stage right!
    return 0;
}

void joke(fstream &file){
    char ch;
    file.get(ch);
    while (!file.fail()){
        cout<<ch;
        file.get(ch);
    }
    cout<<endl;
}

void pnch(fstream &file){
    string input;
    file.seekg(-15L, ios::end);
    while (!file.fail()){
        getline(file,input,'#');
        cout<<input;
    }
    cout<<endl;
}