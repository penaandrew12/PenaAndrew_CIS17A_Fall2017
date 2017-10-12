/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 10th, 2017, 11:00 AM
 * Purpose: String Length As Function with Pointers 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string> //String Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
int strng(char *);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    char string[200]; //String of anything from user input
    int count; //Total Counter for all Variables in String
    
    //Input data
    cout<<"This Program will determine how many characters in a c-string."<<endl;
    cout<<"Please Enter String Now: ";
    std::cin.getline(string,200);
    
    //Map Inputs to Outputs or process the data
    count=strng(string);
    
    //Output the transformed data
    cout<<"Your string of / "<<string<<" / has "<<count<<" characters."<<endl;
    
    //Exit stage right!
    return 0;
}

int strng(char *str){
    int count = 0;
    for(count;str[count]!= 0;count++){
    }
    
    return count;
}