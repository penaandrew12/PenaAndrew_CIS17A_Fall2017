/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Retail Info 
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "retail.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const int num=3;    //Number of Products
    Retail list[num]={Retail("Item #1", "Jacket", 12, 59.95),
                      Retail("Item #2", "Designer Jeans", 40, 34.95),
                      Retail("Item #3", "Shirt", 20, 24.95)};
    
    //Output the transformed data
    cout<<"Item Number "<<" / Description "<<" / Units on Hand "<<" / Price "<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    for(int i=0;i<num;i++){
        cout<<list[i].getItemNum()<<" / ";
        cout<<list[i].getDescrp()<<" / ";
        cout<<list[i].getUnit()<<" / ";
	cout<<list[i].getPrice()<<endl;
    }
    
    //Exit stage right!
    return 0;
}