/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on August 29th, 2017, 12:00 PM
 * Purpose: CPP Template  
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string>   //String Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototype
void sortArry(string [], int);        //Sort Array Alphabetically by Last Name
int BnrySrch(string [], int, string); //Binary Search

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_NAMES=20;
    string names[NUM_NAMES]={"Collins, Bill","Smith, Bart ","Allen, Jim",
                             "Griffin, Jim","Stamey, Marty","Rose, Geri",
                             "Taylor, Terri","Johnson, Jill",
                             "Allison, Jeff","Looney, Joe","Wolfe, Bill",
                             "James, Jean","Weaver, Jim","Pore, Bob",
                             "Rutherford, Greg","Javens, Renee",
                             "Harrison, Rose","Setzer, Cathy",
                             "Pike, Gordon","Holland, Beth"};
    string nmeSrch;     //Name to Search for in Array
    int Srch;           //Search Result

    //Sort Array Alphabetically by Last Name
    sortArry(names,NUM_NAMES);
    
    cout<<"Sorted Array of Names in Alphabetical Order by Last Name."<<endl;
    for(int i=0;i<20;i++){
        cout<<names[i]<<endl;
    }
    cout<<endl;
    
    cout<<"Enter a name to search on the List."<<endl;
    cout<<"Name must Be Last Name, First Name in order to Search."<<endl;
    cout<<"ETC.(Pena, Andrew)"<<endl;
    cin>>nmeSrch;
    
    //Binary Search
    Srch=BnrySrch(names,NUM_NAMES,nmeSrch);
    
    cout<<Srch<<endl;
    
    if (Srch==-1){
        cout<<"Name is not Found"<<endl;    
    }
    else cout<<"Name is Found"<<endl;

    //Exit stage right!
    return 0;
}

void sortArry(string arry[], int size){
    
    bool swap;
    string temp;
    do{
        swap=false;
        for (int i=0;i<(size-1);i++){
            if (arry[i]>arry[i+1]){
                temp=arry[i];
                arry[i]=arry[i+1];
                arry[i+1]=temp;
                swap = true;
            }
        }
    }
    while (swap);
}

int BnrySrch(string names[], int size, string value){
    int first=0,
            last=size-1,
            middle,
            position = -1;
    bool found=false;
    while(!found&&first<=last){
        middle=(first+last)/2;
        if(names[middle]==value){
            found=true;
            position=middle;
        }
        else if(names[middle]>value)
            last=middle-1;
        else
            first=middle+1;
    }
    return position;
}