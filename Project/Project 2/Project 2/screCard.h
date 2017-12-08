/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on Dec 8th, 2017, 12:00 PM
 * Purpose: Project Yahtzee Class
 */

#ifndef SCRECARD_H
#define SCRECARD_H

#include <string>   //String Library
using namespace std;

class screCard{
    protected:
        string name;
        int one,
            two,
            three,
            four,
            five,
            six,
            thrKind,
            fourKind,
            fulHuse,
            smlStrght,
            lrgeStrght,
            chnce,
            yhtze,
            ttl,
            sum,
            bnus,
            roll,
            amnt,
            yaht;
    public:
        screCard();
        void screBoard(screCard *scre); //ScoreBoard Input
};

#endif /* SCRECARD_H */