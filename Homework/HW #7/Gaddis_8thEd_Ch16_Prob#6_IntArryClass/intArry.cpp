/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on December 3rd, 2017, 12:00 PM
 * Purpose:  
 */

#include <iostream>
#include <cstdlib>
#include "intArry.h"
using namespace std;

IntArray::IntArray(int s){
    arraySize=s;
    aptr=new int[s];
    for(int i=0;i<arraySize;i++)
        *(aptr+i)=0;
}

IntArray::IntArray(const IntArray &obj){
    arraySize=obj.arraySize;
    aptr=new int[arraySize];
    for(int i=0;i<arraySize;i++)
        *(aptr+i)=*(obj.aptr+i);
}

IntArray::~IntArray(){
    if(arraySize>0)
        delete[]aptr;
}

int &IntArray::operator [](const int &sub){
    //Error
    try{      
        if(sub<0||sub>=arraySize){
            throw 9999;
        }
        else sub;
    }catch(int x){
        cout<<"Invalid Subscript! Error Code: "<<x<<endl;
        exit(0);
    }
    
    return aptr[sub];
}