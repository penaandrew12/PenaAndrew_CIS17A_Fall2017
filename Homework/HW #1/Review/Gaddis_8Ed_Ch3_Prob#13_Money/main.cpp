/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 10th, 2017, 12:00 PM
 * Purpose: Program that converts U.S. Dollars to Japanese yen and Euros. 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip> //Format Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float US,   //U.S. Dollar
          Yen,   //Conversion to Yen
          Euro;  //Conversion to Euro
    
    //Initialize variables

    //Input data
    cout<<"This Program will Convert US Dollars to Yen and Euros."<<endl;
    cout<<"Enter The Amount of US Dollars you wish to Convert."<<endl;
    cout<<"US Dollar = $";
    cin>>US;
    if (US<=0){
        cout<<"Money Amount must be greater than 0"<<endl;
        return 0;
    }
    
    
    //Map Inputs to Outputs or process the data
    Yen=US*110.158578f;     //Conversion for Yen From US Dollar
    Euro=US*0.8417f;        //Conversion for Euro From US Dollar
            
    //Output the transformed data
    cout<<fixed<<setprecision(2);
    cout<<"With "<<US<<" US Dollars."<<endl; 
    cout<<"The Conversion to Yen is "<<Yen<<endl;
    cout<<"The Conversion to Euros is "<<Euro<<endl;
    
    //Exit stage right!
    return 0;
}