/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on Dec 8th, 2017, 12:00 PM
 * Purpose: Project Yahtzee Class
 */

#include <iostream>
#include <string>
#include <fstream>
#include "rules.h"
using namespace std;

void Rules::shwCntnts(fstream& file){
    //Error Opening File!
    if(!file){
        cout<<"Error Opening File!"<<endl;
        return;
    }
    
    //Read From File
    while(file){
        cout<<line;
        getline(file, line, '#');
    }
    cout<<endl<<endl;

}