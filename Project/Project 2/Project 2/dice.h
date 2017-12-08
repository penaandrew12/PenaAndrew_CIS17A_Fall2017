/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on Dec 6th, 2017, 11:00 AM
 * Purpose: Dice Class
 */

#ifndef DICE_H
#define DICE_H

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
        void rollDice();
};

class Scores:public Dice{
    public:
        void rollScres();
};

#endif /* DICE_H */