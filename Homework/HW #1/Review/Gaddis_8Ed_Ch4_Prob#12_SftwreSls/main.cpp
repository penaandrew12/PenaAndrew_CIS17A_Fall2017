/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 17, 2017, 3:00 PM
 * Purpose: Software sales
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100;    //Conversion to Percent

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float Pkge,     //Amount of Packages you wish to Purchase
        Ttl,        //Total Price for all packages with discount
        Dscnt;      //Discount
    float PrcePkge=99,  //Price Per Package
          PrctDscnt,     //Percent Discount
          NewPkge;      //New Price for Package with Discount
    
    //Initialize variables
    cout<<"You receive a discount the more packages you buy."<<endl;
    cout<<"The Price of each package, without any discount, is $"<<PrcePkge<<"."<<endl;
    cout<<"Enter the amount of packages you wish to purchase = ";
    cin>>Pkge;
    
    if (Pkge<10){ Dscnt=0/PERCENT;
    cout<<"You Receive no Discount. Must Order at least 10 to receive a discount."<<endl;
    }
    else if (Pkge>=10&&Pkge<=19){  Dscnt=20/PERCENT;}
    else if (Pkge>=20&&Pkge<=49){  Dscnt=30/PERCENT;}
    else if (Pkge>=50&&Pkge<=99){  Dscnt=40/PERCENT;}
    else if (Pkge>=100){           Dscnt=50/PERCENT;}

    //Input data
    NewPkge=PrcePkge-(PrcePkge*Dscnt);
    Ttl=NewPkge*Pkge;
    PrctDscnt=Dscnt*PERCENT;
            
    //Output the transformed data
    cout<<"With the current amount of packages you want to buy, you receive a Discount of "<<PrctDscnt<<"%."<<endl;
    cout<<"With your Discount each Packages is $"<<NewPkge<<endl;
    cout<<"Your Total for "<<Pkge<<" Packages is $"<<Ttl<<endl;
    
    //Exit stage right!
    return 0;
}