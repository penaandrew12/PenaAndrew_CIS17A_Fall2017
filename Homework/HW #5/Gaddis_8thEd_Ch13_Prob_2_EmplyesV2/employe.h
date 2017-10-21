/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Employee Info 
 */

#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <string>
using namespace std;

class Employe{
    private:
        string nme;
        int id;
        string dept;
        string post;
        
    public:
        //Constructor 1
        Employe();

        //Constructor 2
        Employe(string, int, string, string);

        //Mutator
        void setName(string);
        void setId(int);
        void seDept(string);
        void setPost(string);

        string getName(){return nme;}
        int getId(){return id;}
        string getDept(){return dept;}
        string getPost(){return post;}
                
};

#endif /* EMPLOYE_H */

