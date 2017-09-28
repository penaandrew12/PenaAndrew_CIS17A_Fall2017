/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 21rst, 2017, 11:00 AM
 * Purpose: Movie Survey
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
int mode(int *,int);
void markSrt(int *,int);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int size=0,  //Size of Array
        line=5;  //Line to Make Array to See
    
    //Input data
    do{
    cout<<"Enter the Amount of Students you wish to record."<<endl;
    cin>>size;
        if (size<=1){
            cout<<"Must input a number greater than 1."<<endl;
        }
    }while(size<=1);
    cout<<endl;
    
    //Fill Array
    int *array=new int[size];
    for(int i=0;i<size;i++){
        cout<<"Student "<<i+1<<": Movies Watched = ";
        cin>>array[i];
    }
    cout<<endl;

    cout<<endl<<"Sorted Array"<<endl;
    markSrt(array,size);
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
        if(i%line==(line-1))cout<<endl;
    }
            
    //Mode of Array
    cout<<endl<<"If there are multiple numbers that appear the same amount of times the First number is Used"<<endl;
    mode(array,size);
    
    //Delete Array
    delete[] array;

    //Exit stage right!
    return 0;
}

void markSrt(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}

int mode(int *array,int size){
    //Declare all Variables
    int count=1,
        max=0,
        mode=array[0];
    int freq=0;     //Frequency of Mode appearing
    float sum=0,    //Average
          med=0;    //Median
    
    
    //Mode
    for(int i=0;i<size-1;i++){
        if(array[i]==array[i+1]){
        count++;        //counts when found
            if(count>max){
                max=count;
                mode=array[i];
            }
        } else
        count=1; //resets counter when found
    }
    
    //Mean
    for(int i=0;i<size;i++){
    sum=sum+array[i];
    }
    sum=sum/size;
    
    //Median
    if(size%2!=0){
        med=array[size/2];
    }
    else med=(array[size/2]+array[(size/2-1)])/2;
    
    //Counter for frequency of mode
    for(int i=0;i<size;i++){
    if (array[i]==mode)
    freq++;
    }
    
    cout<<"The mode is "<<mode<<" Movies Watched this month"<<endl;
    cout<<mode<<" Showed up "<<freq<<" Times"<<endl;
    cout<<"The Mean(Average) Movie Seen is "<<sum<<endl;
    cout<<"The Median of Movie Seen is "<<med<<endl;
}