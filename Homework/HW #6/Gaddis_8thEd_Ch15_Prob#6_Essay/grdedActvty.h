/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Essay Class From Chapter
 */

#ifndef GRDEDACTVTY_H
#define GRDEDACTVTY_H

class GrdedActvty{
protected:
    float grmmr;    //Score For Test
    float spllng;   //Spelling
    float lngth;    //Correct Length
    float cntnt;    //Content
    float ttl;      //Total Score
public:
    GrdedActvty();
    void entrScres();
};

#endif /* GRDEDACTVTY_H */

