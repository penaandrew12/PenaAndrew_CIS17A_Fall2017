/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on Dec 8th, 2017, 12:00 PM
 * Purpose: Project Yahtzee Class
 */

#ifndef RULES_H
#define RULES_H

#include <string>
#include <fstream>
using namespace std;

class Rules{
private:
    string line;
public:
    Rules(){
        line=" ";}
    void shwCntnts(fstream &file);  //Show rules From Txt File
};

#endif /* RULES_H */