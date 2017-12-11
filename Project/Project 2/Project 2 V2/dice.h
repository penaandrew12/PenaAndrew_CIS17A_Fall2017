/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on Dec 6th, 2017, 11:00 AM
 * Purpose: Dice Class
 */

#ifndef DICE_H
#define DICE_H

#include <iostream>
#include <ctime> //Time to set the Seed
#include <cstdlib> //Random numbers
using namespace std;

class Dice{
    public:
        int dice1,
            dice2,
            dice3,
            dice4,
            dice5,
            dice6;
    public:
        Dice();
        virtual void print(){
        }
};

class Scores:public Dice{
    public:
        void rollScres();
        void print(){
            cout<<"Rules for Yahtzee"<<endl;
            cout<<"-------------------------------------------------------------"<<endl;
        }
};

template <class T>
class diceRoll{
    private:
        T *data;
    public:
        roll(int);
};

#endif /* DICE_H */

#include <iostream>
#include <ctime> //Time to set the Seed
#include <cstdlib> //Random numbers
using namespace std;

template <class T>
diceRoll<T>::roll(int p){
    //Declare All Variables
    int num[p]={};

    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Roll dice Function
    data=new T;
    for(int i=0;i<p;i++){
        num[i]=rand()%20+1;
        cout<<"Player "<<i+1<<" rolled a "<<num[i]<<endl;
    }
    
    delete []data;
}