/* 
 * File:   CstmrInfo.h
 * Author: Andrew
 *
 * Created on October 8, 2017, 8:34 PM
 */

#ifndef CSTMRINFO_H
#define CSTMRINFO_H

#include <iostream> //Input - Output Library
#include <string> //String Library
using namespace std; //Name-space under which system libraries exist

struct info{
    string name;    //Name of Person
    string addrsNme;    //Address Name
    string city;    //City Name
    string state;   //state Name
    long int areaCde;   //Zip code
    long int phneNum;   //Phone Number
    float accntBal; //Account Balance
    int lPayDte;    //Last Pay Date
};

#endif /* CSTMRINFO_H */

