/* 
 * File:   main.cpp
 * Author: Andrew
 * Created on September 6, 2017, 1:19 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int size=0;
    
    cout<<"Enter size of array."<<endl;
    cin>>size;
    
    int array[size]={0};
    
    for (int i=0;i<size;i++){
    int a=0;
    cin>>a;  
    array[i]=a;
    }

    cout<<endl<<"New Array"<<endl;
    for(int i=size-1;i>=0;i--){
    cout<<array[i]<<" ";
    }
    
    
    return 0;
}
