/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Retail Info 
 */

#include <string>
#include "retail.h"
using namespace std;

Retail::Retail(){
    item=" ";
    descrp=" ";
    units=0;
    price=0;
}

Retail::Retail(string Item, string Desc, int Unit, float Price){
    item=Item;
    descrp=Desc;
    units=Unit;
    price=Price;
}

void Retail::setItem(string i){
    i=item;
}

void Retail::setDescrp(string d){
    descrp=d;
}

void Retail::seUnit(int u){
    units=u;
}

void Retail::setPrice(float p){
    price=p;
}