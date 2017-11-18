/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 16th, 2017, 12:00 PM
 * Purpose: Number Days Class
 */

#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays{
    private:
        float hrs;
        float days;
    public:
        NumDays();
        void print();
        NumDays operator+();
        NumDays operator-();
        NumDays operator++();
        NumDays operator--();
};

#endif /* NUMDAYS_H */

