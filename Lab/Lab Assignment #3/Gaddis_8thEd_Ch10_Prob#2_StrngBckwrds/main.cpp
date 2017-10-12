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
void bckwrds(char *);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    char string[200]; //String of anything from user input
    
    //Input data
    cout<<"This Program will determine how many characters in a c-string."<<endl;
    cout<<"Please Enter String Now: ";
    std::cin.getline(string,200);
    
    cout<<"Your c-string is "<<string<<endl;
    
    //Output the transformed data
    cout<<"Your c-string backwards is ";
    bckwrds(string);
    
    //Exit stage right!
    return 0;
}

void bckwrds(char *str){
    if(*str=='\0'){
    return;
    }
    else // the recursive step{
    bckwrds(str+1);
    cout<<*(str);
}