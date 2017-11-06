/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 3rd 31, 2017, 12:00 PM
 * Purpose: Project Yahtzee Structure
 */

#ifndef SCRECARD_H
#define SCRECARD_H

struct screCard{
    char name[];
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
};

#endif /* SCRECARD_H */

