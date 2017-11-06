/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 31, 2017, 12:00 PM
 * Purpose: Project
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cstdlib>  //Random number generator
#include <ctime>    //Time library for seed
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "dice.h"   //Dice Header

//Global Constants

//Function Prototype
Dice *diceRoll(int);
void prntRoll(Dice *);
void destroy(Dice *);
void choce(Dice *);

// Execution begins here!
int main(int argc, char *argv[]){
    //Seed the random number function with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int side=6; //sides to Dice
    
    //Dynamically Allocated Array
    Dice *dArray=diceRoll(side);;
    
    prntRoll(dArray);
    choce(dArray);
    prntRoll(dArray);
    
     //Deallocate Memory
    destroy(dArray);
    
    //Exit stage right!
    return 0;
}

void choce(Dice *z){
    char ans;   //PLayes Answer
    cout<<endl<<"Player May Keep Whatever Dice He/She Chooses!"<<endl;
    for(int i=0;i<z->turns;i++){
    cout<<"Do you wish to keep dice number "<<i+1<<": "<<z->dice1[i]<<"? ";
    cout<<"Type Y or y to keep. If not, type anything else to use for next roll."<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
            z->dice1[i+1]=z->dice1[i];
        }
        else z->dice1[i+1]=rand()%6+1;
    if(ans=='Y'||ans=='y'){
            z->dice2[i+1]=z->dice2[i];
        }
        else z->dice2[i+1]=rand()%6+1;
    
    if(ans=='Y'||ans=='y'){
            z->dice3[i+1]=z->dice3[i];
        }
        else z->dice3[i+1]=rand()%6+1;
    
    if(ans=='Y'||ans=='y'){
            z->dice4[i+1]=z->dice4[i];
        }
        else z->dice4[i+1]=rand()%6+1;
    
    if(ans=='Y'||ans=='y'){
            z->dice5[i+1]=z->dice5[i];
        }
        else z->dice5[i+1]=rand()%6+1;
    
    if(ans=='Y'||ans=='y'){
            z->dice6[i+1]=z->dice6[i];
        }
        else z->dice6[i+1]=rand()%6+1;
    }
}

void destroy(Dice *d){
    delete []d->dice1;
    delete d;
}

void prntRoll(Dice *a){
    cout<<endl;
    for(int i=0;i<a->turns;i++){
        cout<<a->dice1[i]<<" ";
        cout<<a->dice2[i]<<" ";
        cout<<a->dice3[i]<<" ";
        cout<<a->dice4[i]<<" ";
        cout<<a->dice5[i]<<" ";
        cout<<a->dice6[i]<<" ";
    }
    cout<<endl;
}

Dice *diceRoll(int n){
    Dice *d=new Dice;
    d->side=n;
    d->dice1=new int[d->side];
    d->dice1=rand()%6+1;
    d->dice2=rand()%6+1;
    d->dice3=rand()%6+1;
    d->dice4=rand()%6+1;
    d->dice5=rand()%6+1;
    d->dice6=rand()%6+1;
    
    return d;
}
    
