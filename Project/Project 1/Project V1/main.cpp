/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 31, 2017, 12:00 PM
 * Purpose: Project Version 1 Yahtzee
 */

//System Libraries
#include <iostream> //Input Output library
#include <cstdlib> //Random numbers
#include <ctime>   //Time to set the Seed

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "dice.h" //dice Header File

//Global Constants

//Function Prototype
Dice roll(int);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int size=3;
    
    Dice d;
    
    //Roll Function
    roll(size);
    
    cout<<endl<<"Score Card"<<endl;
    cout<<"-------------------------------------"<<endl;

    
    //Exit stage right!
    return 0;
}

Dice roll(int size){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Dynamically Allocated Array
    Dice *a=new Dice[size];
    
    //Players Choice for Yes
    char ans;
    
    for(int i=0;i<size-1;i++){
        if(i==0){
        //Call random number generator for the first dice roll
        a[0].dice1=rand()%6+1;
        a[0].dice2=rand()%6+1;
        a[0].dice3=rand()%6+1;
        a[0].dice4=rand()%6+1;
        a[0].dice5=rand()%6+1;
        a[0].dice6=rand()%6+1;

        //Dice Roll Results
        cout<<"First Dice Roll"<<endl;
        cout<<"Dice 1: "<<a[0].dice1<<endl;
        cout<<"Dice 2: "<<a[0].dice2<<endl;
        cout<<"Dice 3: "<<a[0].dice3<<endl;
        cout<<"Dice 4: "<<a[0].dice4<<endl;
        cout<<"Dice 5: "<<a[0].dice5<<endl;
        cout<<"Dice 6: "<<a[0].dice6<<endl;
        }
        
        //Input Dice in which user wishes to keep
        cout<<endl<<"Player May Keep Whatever Dice He/She Chooses!"<<endl;
        cout<<"Do you wish to keep dice number 1? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice1=a[i].dice1;
        }
        else a[i+1].dice1=rand()%6+1;

        cout<<"Do you wish to keep dice number 2? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice2=a[i].dice2;
        }
        else a[i+1].dice2=rand()%6+1;

        cout<<"Do you wish to keep dice number 3? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice3=a[i].dice3;
        }
        else a[i+1].dice3=rand()%6+1;

        cout<<"Do you wish to keep dice number 4? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice4=a[i].dice4;
        }
        else a[i+1].dice4=rand()%6+1;

        cout<<"Do you wish to keep dice number 5? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice5=a[i].dice5;
        }
        else a[i+1].dice5=rand()%6+1;

        cout<<"Do you wish to keep dice number 6? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice6=a[i].dice6;
        }
        else a[i+1].dice6=rand()%6+1;


        //Dice Roll Results
        cout<<endl<<"Dice Roll Results"<<endl;
        cout<<"Dice 1: "<<a[i+1].dice1<<endl;
        cout<<"Dice 2: "<<a[i+1].dice2<<endl;
        cout<<"Dice 3: "<<a[i+1].dice3<<endl;
        cout<<"Dice 4: "<<a[i+1].dice4<<endl;
        cout<<"Dice 5: "<<a[i+1].dice5<<endl;
        cout<<"Dice 6: "<<a[i+1].dice6<<endl;
    }
    
    //Deallocate Memory
    delete []a;
}