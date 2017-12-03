/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on December 3rd 12th, 2017, 12:00 PM
 * Purpose: Test Scores Class
 */

#include <iostream>
#include "tstScrs.h"

using namespace std;

TstScrs::TstScrs(){
    num=0;
    sum=0;
}

void TstScrs::fillArry(){
    cout<<"Enter Amount of Test Scores: ";
    cin>>num;
    
    //Fill Array
    int *array=new int[num];
    for(int i=0;i<num;i++){
        cout<<"Test Score "<<i+1<<": ";
        cin>>array[i];   
        //Error
        try{      
            if(array[i]<0||array[i]>100){
                throw 9999;
            }
            else array[i];

        }catch(int x){
            cout<<"Test Score Cannot be less than 0 or greater than 100. Error Code: "<<x<<endl;
        }
    }
    cout<<endl;
    
    for(int i=0;i<num;i++){
    sum+=array[i];
    }
    sum/=num;
    cout<<"Average Test Score = "<<sum<<endl;
    
    //Delete Array
    delete[] array;
}