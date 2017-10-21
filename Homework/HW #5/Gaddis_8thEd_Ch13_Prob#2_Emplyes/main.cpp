/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Employee Info 
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "employe.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const int emp=3;    //Number of Employees
    Employe list[emp]={Employe("Susan Meyers", 47899, "Accounting", "Vice President"),
                       Employe("Mark Jones", 39119, "IT", "Programmer"),
                       Employe("Roy Rogers", 81774, "Manufacturing", "Engineer")};
    
    //Output the transformed data
    cout<<"Name "<<" / ID Number "<<" / Department "<<" / Position "<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    for(int i=0;i<emp;i++){
        cout<<list[i].getName()<<" / ";
        cout<<list[i].getId()<<" / ";
        cout<<list[i].getDept()<<" / ";
	cout<<list[i].getPost()<<endl;
    }
    
    //Exit stage right!
    return 0;
}