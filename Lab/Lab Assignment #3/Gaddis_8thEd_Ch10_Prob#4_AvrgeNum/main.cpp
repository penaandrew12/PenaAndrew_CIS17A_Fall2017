/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 10th, 2017, 11:00 AM
 * Purpose: Average Number of Letter in Each Word  
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
float wrdCntr(char *);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    char string[200]; //String of anything from user input
    float avrge=0; //Average Number of Letters per word in c-string
    
    //Input data
    cout<<"This Program will accept a c-string and display the Average Number of Letters in each word."<<endl;
    cout<<"Please Enter String Now: ";
    std::cin.getline(string,200);

    //Output the transformed data
    avrge=wrdCntr(string);
    cout<<"The Average Number of Letters in each word is "<<avrge<<endl;
    
    //Exit stage right!
    return 0;
}

float wrdCntr(char *str){
    float words=1, //Count for Amount of Words
          ttl=0,  //Count for total amount of words
          avrge=0;  //Average Number of Letters in each word
    
    //Word Counter
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            words++;
	} 		
    }

    //Total Character Counter without spaces 
    for(char *a=str;*a;ttl+=(*a++!=' '));
 
    cout<<"Total amount of characters without spaces is "<<ttl<<endl;
    cout<<"Total Amount of words is "<<words<<endl;
    
    avrge=ttl/words;
    
    return avrge;
}