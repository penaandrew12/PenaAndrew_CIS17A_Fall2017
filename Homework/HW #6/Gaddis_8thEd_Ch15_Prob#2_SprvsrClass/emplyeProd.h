/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Employee and Production Worker Classes
 */

#ifndef emplyeProd
#define emplyeProd
#include <string>   //String Library
using namespace std;

class Emplye{
    protected:
        string nme; //Employee Name
        int num;    //Employee Number
        int hreDte;  //Hire Date
    public:
        Emplye();   //Constructor
};

class Suprvsr:public Emplye{
    private:
        int shft;     //Shift
        float payRte; //Hour Pay Rate
        float annulSlry;    //Annual Salary
        float bnus;     //Bonus
    public:
        void setWrkDay();   //Set Work Day Info
        void setInfo();   //Set Personal Info
        void dsply();   ///Display Information
        Suprvsr();  //Constructor
        void setSlry();
};

#endif /* emplyeProd */