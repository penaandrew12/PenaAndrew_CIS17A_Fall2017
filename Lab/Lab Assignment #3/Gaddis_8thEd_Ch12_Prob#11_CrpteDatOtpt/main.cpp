/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 10th, 2017, 11:00 AM
 * Purpose: Corporate Sales data Output 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip> //Format Library
#include <fstream>
#include <valarray> //File Library

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
    fstream info("Info.txt",ios::out|ios::binary);
    
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

        cout<<endl;
    }

    //Output the transformed data
    for(int i=0;i<size;i++){
    cout<<endl<<"Division # / First-Quarter Name / Second-Quarter Name / Third-Quarter Name / Fourth-Quarter Name "<<endl;
    cout<<i+1<<setw(14)<<" $ "<<a[i].frstSls<<setw(20)<<"  $ "<<a[i].scndSls<<setw(21)<<"  $ "<<a[i].thrdSls<<setw(20)<<"  $ "<<a[i].forthSls<<endl;
    cout<<"Total Annual Sales "<<endl;
    cout<<"$ "<<a[i].ttlSls<<endl;
    info.write(reinterpret_cast<char *>(&a),sizeof(a));
    }
    
    info.close();
    
    info.open("Info.txt",ios::out|ios::binary);
    
    cout<<"------------------------------------------------------------------"<<endl;
    //Read from file
    info.read(reinterpret_cast<char *>(&a),sizeof(a));
    while(!info.eof()){
        for(int i=0;i<size;i++){
        cout<<a[size].frstSls;  //First-Quarter Name
        cout<<a[size].scndSls;  //Second-Quarter Name
        cout<<a[size].thrdSls;  //Third-Quarter Name
        cout<<a[size].forthSls; //Fourth-Quarter Name
        cout<<a[size].ttlSls;   //Total Annual Sales
        }
    }
    
    //Close File
    info.close();

    //Exit stage right!
    return 0;
}