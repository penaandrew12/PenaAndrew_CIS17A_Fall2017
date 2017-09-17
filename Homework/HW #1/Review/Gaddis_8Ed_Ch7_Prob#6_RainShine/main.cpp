/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 17th, 2017, 11:00 AM
 * Purpose: Rain or Shine Table and Report
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <fstream>  //Library for Files

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=3;   //Array Size of Rows
    const int COLS=30;  //Array Size of Columns
    char wthr[ROWS][COLS]; //Array with 31 Elements
    int mnth=0, //Month in which it rained the Most
        Rain=0,   //Total Days it Rained
        Cloud=0,  //Total Days it was Cloudy
        Sun=0,    //Total Days it was Sunny   
        i=0,    //Counter
        j=0;    //Counter
    ifstream inptFle;   //Input File

    //Read from File
    inptFle.open("RainOrShine.txt");
    
    //File To Array 
     for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++)
            inptFle>>wthr[i][j];
    }
    
    //Table of Array
    cout<<"Table for Weather Conditions"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++)
        cout<<wthr[i][j]<<" ";
    cout<<endl;
    }
    
    //Counter for Characters for Rain/Cloud/Sun (June)   
    for (i=0;i<ROWS;i++){    
        for (j = 0; j < COLS; j++){    
            i  << wthr[i][j];    
           inptFle >> wthr[i][j];    
            if (wthr[i][j] == 'R')    
                Rain++;
                else if (wthr[i][j] == 'S')    
                Sun++;            
            else if (wthr[i][j] == 'C')    
                Cloud++;
        }
    }
            
    //Output the transformed data
    cout<<endl<<"Report of Table for Each Month"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Total Number of Days it Rained "<<Rain<<endl;
    cout<<"Total Number of Days it was Cloudy "<<Cloud<<endl;
    cout<<"Total Number of Days it was Sunny "<<Sun<<endl;
    
    //Close File
    inptFle.close();
    
    //Exit stage right!
    return 0;
}