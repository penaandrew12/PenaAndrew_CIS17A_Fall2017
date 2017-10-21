/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Employee Info 
 */

#include <string>
#include "employe.h"
using namespace std;

Employe::Employe(){
    nme="";
    id=0;
    dept="";
    post="";
}

Employe::Employe(string name, int num, string desc, string postit){
    nme=name;
    id=num;
    dept=desc;
    post=postit;
}

void Employe::setName(string n){
    n=nme;
}

void Employe::setId(int num){
    id=num;
}

void Employe::seDept(string depart){
     dept=depart;
}

void Employe::setPost(string poston){
    post=poston;
}