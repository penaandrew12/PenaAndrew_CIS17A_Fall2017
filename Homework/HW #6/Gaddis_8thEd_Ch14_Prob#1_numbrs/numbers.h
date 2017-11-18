/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Numbers Class 
 */

#ifndef NUMBERS_H
#define NUMBERS_H

#include <string>   //String Library
using namespace std;

class Numbers{
    private:
        int numbr; //Inputed Number
        string lessThan20; //Numbers for Less than twenty
        string hundred; //hundred
        string thousand; //thousand
   public:
        //Constructor
        Numbers();
        //Print Results
        void print();
};

#endif /* NUMBERS_H */

