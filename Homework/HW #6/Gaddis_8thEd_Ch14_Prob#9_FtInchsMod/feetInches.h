/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Feet Inches Modification from Book
 */

#ifndef FEETINCHES_H
#define FEETINCHES_H

class FeetInches{
private: 
    int feet;
    int inches;
    void simplify();
public:
    FeetInches(int f=0, int i=0){
        feet=f;
        inches=i;
        simplify();
    }
    void setFeet(int f){
        feet=f;
    }
    void setInches(int i){
        inches=i;
    }
    int getFeet()const{
        return feet;
    }
    int getInches()const{
        return inches;
    }
    
    bool operator<=(const FeetInches &);
    bool operator>=(const FeetInches &);
    bool operator!=(const FeetInches &);
    
};

#endif /* FEETINCHES_H */

