/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 31, 2017, 12:00 PM
 * Purpose: Practice
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <ctime>
#include <cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "dice.h"

//Global Constants

//Function Prototype
Dice *RNG(int);
Dice *Roll();
int rollSixTimes(Dice *);

// Execution begins here!
int main(int argc, char** argv) {
    //Time Seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare Variables
    Dice d;
    int num=6;
    
    Dice *roll=Roll();

    RNG(num);
    Roll();
    
    cout<<"---------------------"<<endl;
    int *six=new int[num];
    cout<<"---------------------"<<endl;
      
    cout<<d.dice<<endl; 
    Dice *ptr;
    ptr=&d;                 //Pointer to Structure in Dice
    cout<<ptr->dice<<endl;  //Points to Dice in Structure
    
    
    delete []six;
    
    //Exit stage right!
    return 0;
}

int rollSixTimes(Dice *roll){
    Dice d;
    for(int i=0;i<6;i++){
        d.dice=(rand()%99)+1;
        cout<<d.dice<<endl;
    }
}

Dice *RNG(int n){
    Dice d;
    Dice *ptr;
    d.dice=(rand()%99)+1;   //Uses Structure dice as variable
    cout<<d.dice<<endl; 
    ptr=&d;                 //Pointer to Structure in Dice
    cout<<ptr->dice<<endl;  //Points to Dice in Structure
}

Dice *Roll(){
    Dice *d;
    d->dice=(rand()%99)+1; //Uses Structure dice as variable
    cout<<d->dice<<endl;    //Shows Dice Rolled
    return d;
}