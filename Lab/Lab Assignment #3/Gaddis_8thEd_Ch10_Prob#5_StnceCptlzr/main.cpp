/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 10th, 2017, 11:00 AM
 * Purpose: Capitalizer for First Word in each sentence
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
int sntcCptlzr(char *);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    char string[200]; //String of anything from user input
    
    //Input data
    cout<<"This Program will determine how many characters in a c-string."<<endl;
    cout<<"Please Enter String Now: ";
    std::cin.getline(string,200);
    
    //Original String
    cout<<endl<<"The Original C-String is "<<string<<endl;
    
    //Map Inputs to Outputs or process the data
    sntcCptlzr(string);
    
    //Modified C-String
    cout<<endl<<"The Modified C-String is "<<string<<endl;
    
    //Exit stage right!
    return 0;
}

int sntcCptlzr(char *str){
    str[0]=toupper(str[0]);
}