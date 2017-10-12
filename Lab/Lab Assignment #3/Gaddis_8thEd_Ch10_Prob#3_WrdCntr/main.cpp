/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 10th, 2017, 11:00 AM
 * Purpose: Word Counter  
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string> //String Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
int wrdCntr(char *);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    char string[200]; //String of anything from user input
    int count=0; //Number of Words
    
    //Input data
    cout<<"This Program will accept a c-string and return the word count."<<endl;
    cout<<"Please Enter String Now: ";
    std::cin.getline(string,200);

    //Output the transformed data
    count=wrdCntr(string);
    cout<<"The Number of Words in the String is "<<count+1<<endl;
    
    //Exit stage right!
    return 0;
}

int wrdCntr(char *str){
    int count=0;
    for(int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' '){
            count++;
	} 		
    }
    return count;
}