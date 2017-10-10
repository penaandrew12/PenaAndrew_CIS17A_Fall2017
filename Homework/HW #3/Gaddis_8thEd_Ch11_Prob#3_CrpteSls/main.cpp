/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 2nd, 2017, 1:40 PM
 * Purpose: Corporate Sales Data 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip> //Format Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "CrpteSls.h"

//Global Constants

//Function Prototype

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const int size=4; //Array size of four for Each Division
    CrpteSls a[size]; //Array of Structures
    
    cout<<"Division North,South,West,East will be preferred as 1-4 You can Chose which is which."<<endl;
    
    //Input Information
    for(int i=0;i<size;i++){
        cout<<"Division "<<i+1<<endl;
        
        do{
        cout<<"First-Quarter Sales Figure: $";
        cin>>a[i].frstSls;
        if (a[i].frstSls<0){
            cout<<"Sales Number must be Greater than or Equal to 0"<<endl;
        }
        }while(a[i].frstSls<0);
        
        do{
        cout<<"Second-Quarter Sales Figure: $";
        cin>>a[i].scndSls;
        if (a[i].scndSls<0){
            cout<<"Sales Number must be Greater than or Equal to 0"<<endl;
        }
        }while(a[i].scndSls<0);
        
        do{
        cout<<"Third-Quarter Sales Figure: $";
        cin>>a[i].thrdSls;
        if (a[i].thrdSls<0){
            cout<<"Sales Number must be Greater than or Equal to 0"<<endl;
        }
        }while(a[i].thrdSls<0);
        
        do{
        cout<<"Fourth-Quarter Sales Figure: $";
        cin>>a[i].forthSls;
        if (a[i].forthSls<0){
            cout<<"Sales Number must be Greater than or Equal to 0"<<endl;
        }
        }while(a[i].forthSls<0);
        
        //Total sales
        a[i].ttlSls=a[i].frstSls+a[i].scndSls+a[i].thrdSls+a[i].forthSls;
        
        //Average Sales
        a[i].avgSls=a[i].ttlSls/2;
        cout<<endl;
    }

    //Output the transformed data
    for(int i=0;i<size;i++){
    cout<<endl<<"Division # / First-Quarter Name / Second-Quarter Name / Third-Quarter Name / Fourth-Quarter Name "<<endl;
    cout<<i+1<<setw(14)<<" $ "<<a[i].frstSls<<setw(20)<<"  $ "<<a[i].scndSls<<setw(21)<<"  $ "<<a[i].thrdSls<<setw(20)<<"  $ "<<a[i].forthSls<<endl;
    cout<<"Total Annual Sales / Average Quarterly Sales "<<endl;
    cout<<"$ "<<a[i].ttlSls<<setw(19)<<" $ "<<a[i].avgSls<<endl;
    }
    
    //Exit stage right!
    return 0;
}