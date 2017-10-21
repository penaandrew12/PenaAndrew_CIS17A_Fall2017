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
        Employe(){
            nme="";
            id=0;
            dept="";
            post="";
        }

        //Constructor 2
        Employe(string name, int num, string desc, string postit){
            nme=name;
            id=num;
            dept=desc;
            post=postit;
        }

        //Mutator
        void setName(string n){
            n=nme;}
        void setId(int num){
            id=num;}
        void seDept(string depart){
            dept=depart;}
        void setPost(string poston){
            post=poston;}

        //Accessor
        string getName()const{
            return nme;}
        int getId()const{
            return id;}
        string getDept()const{
            return dept;}
        string getPost()const{
            return post;}
};

#endif /* EMPLOYE_H */

