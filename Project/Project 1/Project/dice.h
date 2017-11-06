/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 31, 2017, 12:00 PM
 * Purpose: Project Version 1 Yahtzee
 */

#ifndef DICE_H
#define DICE_H

#include <iostream>
using namespace std;

struct Dice{
    int side;   //Amount of Turns to roll
    int dice1; //Dice 1
    int *dice2; //Dice 2
    int *dice3; //Dice 3
    int *dice4; //Dice 4
    int *dice5; //Dice 5
    int *dice6; //Dice 6
    int turns;
};

#endif /* DICE_H */
