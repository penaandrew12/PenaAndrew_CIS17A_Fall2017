/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 17, 2017, 3:30 PM
 * Purpose: Color Mixer
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    char Y, B, R;            //Yellow, Blue, Red
    char P, O, G,            //Purple, Orange, Green
         FrstClr, ScndClr;   //First Color, Second Color
  
    
    //Map inputs to outputs or process the data
    cout<<"Of the Three Primary Colors [Y]ellow, [R]ed, [B]lue,";
    cout<<" find out what colors form from being mixed of two.\n";
    cout<<"If you do not input Blue as B, Red as R, or Yellow as Y, ";
    cout<<"An error message will appear."<<endl;
    cout<<"First Color = ";
    cin>>FrstClr;
    cout<<"Second Color = ";
    cin>>ScndClr;

        if (FrstClr=='Y'){
        if (ScndClr=='B'){
        cout<<"If you mix Yellow and Blue it will make Green"<<endl;}
        if (ScndClr=='R'){  
        cout<<"If you mix Yellow and Red it will make Orange"<<endl;}
        }
            else if (FrstClr=='B'){
                if (ScndClr=='R'){
                cout<<"If you mix Blue and Red it will make Purple."<<endl;}
                if (ScndClr=='Y'){
                cout<<"If you mix Blue and Yellow it will make Green"<<endl;}
            }
                    else if (FrstClr=='R'){
                        if (ScndClr=='Y'){
                        cout<<"If you mix Red and Yellow it will make Orange"<<endl;}
                        if (ScndClr=='B'){
                        cout<<"If you mix Red and Blue it will make Purple."<<endl;}
                    }
                        else cout<<"Invalid Color(s)."<<endl;

    //Exit stage right!
    return 0;
}