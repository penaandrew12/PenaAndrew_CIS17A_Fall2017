/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on Dec 6th, 2017, 11:00 AM
 * Purpose: Project 2
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <fstream>  //File Library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "dice.h"
#include "screCard.h"
#include "rules.h" //Dice Header File

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    
    //Declare Variables
    char choice;    //Choice for Menu Input
    Scores s;      //Scores Class Object
    screCard sc;    //Score 
    Rules rules;    //Rules From File with Operator Overload
    fstream dataFile;   //Input File from outside Folder
    
    //Loop on the menu
    do{
    
        //Input values for Menu
        cout<<endl<<"Choose from the list"<<endl;
        cout<<"Type 1 to Do a Short Roll Of Dice if you are playing with multipe people to decide who goes first."<<endl;
        cout<<"Type 2 to See Yahtzee Rules"<<endl;
        cout<<"Type 3 to Roll Dice"<<endl;
        cout<<"Type 4 to Input Score Card and save to Encrypted File"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;
        cout<<endl;
        
        //Switch to determine the Problem
        switch(choice){
            case '1':{      
                //Declare Variables 
                float plyrs=0;
                
                cout<<"This Yahtzee game is made soley for one player. Sorry but you must take turns if playing with another person."<<endl;
                cout<<"This part will let you decide how many people want to play and for each person to roll dice to se who goes first."<<endl;
                cout<<"You can keep going until someone is decided to go first. The Dice Used is 20 sided to lessen the chance of rolling the same number."<<endl;
                cin>>plyrs;
                
                //Roll dice Function
                diceRoll<int> r;
                r.roll(plyrs);
                
                //Exit stage right!
                break;
            }
            case '2':{             
                //Open File
                dataFile.open("Rules to Yahtzee.txt", ios::in);
                
                Dice *dptr;
                Scores sptr;
                dptr=&sptr;
                dptr->print();
                
                rules.shwCntnts(dataFile);
                
                //Close File
                dataFile.close();
                
                //Exit stage right!
                break;
            }
            case '3':{
                //Info On How to how to keep score
                cout<<"This Is Just for Rolling Dice and seeing score"<<endl;
                cout<<"You may write down the score to remember but no need two write down bonuses, sum, or total."<<endl;
                cout<<"#3 in Menu will calculate all That for you."<<endl;
                cout<<endl;
                s.rollScres(); //Uses Variables from Dice Class (Inheritance)
                
                break;
            }
            case '4':{
                screCard *scre;
                sc.screBoard(scre); //Displays ScoreBoard and gets User Input
                
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='4');
    
    //Exit stage right!
    return 0;
}