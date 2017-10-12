/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 10th, 2017, 11:00 AM
 * Purpose: Corporate Sales data Output 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip> //Format Library
#include <fstream> //File Library
#include <ctime>
#include <cstdlib>

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "CrpteSls.h"

//Global Constants

//Function Prototype
void wrtTxt(fstream &,CrpteSls *,int);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const int size=4; //Array size of four for Each Division
    CrpteSls a[size]; //Array of Structures
    fstream info,   //Binary File
            txtFile; //Text File for Binary
    
    //Text and Binary File Open
    txtFile.open("data.txt",ios::in|ios::out);
    info.open("Info.txt",ios::out|ios::binary);
    
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
    
    wrtTxt(txtFile,a,size);
    
    //Delete the array
    delete a;
    
    //Close File
    info.close();
    txtFile.close();

    
    //Exit stage right!
    return 0;
}

void wrtTxt(fstream &out,CrpteSls *a,int size){
    out<<endl;
    
    for(int i=0;i<size;i++){
    out<<a[size].frstSls<<endl;  
        out<<a[size].scndSls<<endl; 
        out<<a[size].thrdSls<<endl;  
        out<<a[size].forthSls<<endl; 
        out<<a[size].ttlSls<<endl;
        out<<endl;
    }
}