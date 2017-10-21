/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Personal Information Classes
 */

#ifndef PRSNLINFO_H
#define PRSNLINFO_H

#include <string> //String Library
using namespace std;

class Info{
    private:
        string name;
        string addrs;
        int age;
        string num;
        
    public:
        Info();
        void setNme();
        void setAddrs();
        void setAge();
        void setNum();
        string getNme(){
            return name;}
        string getAddrs(){
            return addrs;}
        int getAge(){
            return age;}
        string getNum(){
            return num;}
};

#endif /* PRSNLINFO_H */