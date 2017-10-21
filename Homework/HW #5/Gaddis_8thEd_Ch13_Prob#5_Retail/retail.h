/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Retail Info 
 */

#ifndef Retail_H
#define Retail_H

#include <string>
using namespace std;

class Retail{
    private:
        string item;
        string descrp;
        int units;
        float price;
        
    public:
        //Constructor 1
        Retail();

        //Constructor 2
        Retail(string, string, int, float);

        //Mutator
        void setItem(string);
        void setDescrp(string);
        void seUnit(int);
        void setPrice(float);

        string getItemNum(){return item;}
        string getDescrp(){return descrp;}
        int getUnit(){return units;}
        float getPrice(){return price;}
                
};

#endif /* Retail_H */

