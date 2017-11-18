/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Personal and Customer Data
 */

#ifndef DATA_H
#define DATA_H

#include <string> //String Library
using namespace std;

class PrsnData{
    protected:
        string lstNme;
        string frstNme;
        string addrss;
        string city;
        string state;
        int zip;
        int phne;
    public:
        PrsnData();
};

class CstmrData:PrsnData{
    private:
        int cstmrNum;
        bool status;
    public:
        CstmrData();
        void setData();
        bool mailingLst();
        void getData();
};

#endif /* DATA_H */