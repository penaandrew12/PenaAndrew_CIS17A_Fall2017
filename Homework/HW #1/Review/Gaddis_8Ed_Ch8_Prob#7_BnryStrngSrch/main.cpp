/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on September 15, 2017, 12:00 PM
 * Purpose: Binary Search of Strings 
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
    
    if (Srch>=0){
        cout<<"Name is Found"<<endl;    
    }
    else cout<<"Name is not Found"<<endl;

    cout<<"Can't Find out how to Use Binary Search for this Program"<<endl;
    
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
    int low=0,
        high=size-1,
        mid;

    while(low<=high){
        mid=(low+high)/2;
        if(value==names[mid]){
            return mid;
        }
        else if(value>names[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
    