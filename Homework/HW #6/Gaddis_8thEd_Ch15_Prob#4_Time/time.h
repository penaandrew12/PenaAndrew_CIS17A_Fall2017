/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Time Class From Book
 */

#ifndef TIME_H
#define TIME_H

class Time{
    protected:
        int hour;
        int min;
        int sec;
    public:
        Time();
        Time(int, int, int);
        
        int getHour()const;
        int getMin()const;
        int getSec()const;
};

#endif /* TIME_H */

