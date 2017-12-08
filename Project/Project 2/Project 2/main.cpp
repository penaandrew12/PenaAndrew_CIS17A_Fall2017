/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on Dec 6th, 2017, 11:00 AM
 * Purpose: Project 2
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <fstream>  //File Library
#include <string> //String Librar
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "dice.h"
#include "screCard.h" //Dice Header File

//Global Constants

//Function Prototype
void shwCntnts(fstream &file); //Show rules From Txt File

// Execution begins here!
int main(int argc, char** argv) {
    
     //Declare Variables
    char choice;    //Choice for Menu Input
    fstream dataFile;   //Input File from outside Folder
    Scores s;      //Scores Class Object
    screCard sc;    //Score 
    
    //Loop on the menu
    do{
    
        //Input values for Menu
        cout<<endl<<"Choose from the list"<<endl;
        cout<<"Type 1 to See Yahtzee Rules"<<endl;
        cout<<"Type 2 to Roll Dice"<<endl;
        cout<<"Type 3 to Input Score Card and save to Encrypted File"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;
        cout<<endl;
        
        //Switch to determine the Problem
        switch(choice){
            case '1':{
                //Open File
                dataFile.open("Rules to Yahtzee.txt", ios::in);
                
                //Rules for Game
                cout<<"Rules for Yahtzee"<<endl;
                cout<<"-------------------------------------------------------------"<<endl;
                shwCntnts(dataFile);
                
                //Close File
                dataFile.close();
                
                //Exit stage right!
                break;
            }
            case '2':{
                //Info On How to how to keep score
                cout<<"This Is Just for Rolling Dice and seeing score"<<endl;
                cout<<"You may write down the score to remember but no need two write down bonuses, sum, or total."<<endl;
                cout<<"#3 in Menu will calculate all That for you."<<endl;
                cout<<endl;
                s.rollScres(); //Uses Variables from Dice Class (Inheritance)
                
                break;
            }
            case '3':{
                screCard *scre;
                sc.screBoard(scre); //Displays ScoreBoard and gets User Input
                
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='3');
    
    //Exit stage right!
    return 0;
}

void shwCntnts(fstream &file){
    string line;
    while(file){
        cout<<line;
        getline(file, line, '#');
    }
    cout<<endl<<endl;
}
