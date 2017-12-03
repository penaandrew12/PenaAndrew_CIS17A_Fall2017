/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on December 3rd, 2017, 12:00 PM
 * Purpose:  
 */

#ifndef INTARRY_H
#define INTARRY_H

class IntArray{
    private:
        int *aptr;
        int arraySize;
    
    public:
        IntArray(int);
        IntArray(const IntArray &);
        ~IntArray();
        int size() const{
            return arraySize;}
        int &operator[](const int &);
};

#endif /* INTARRY_H */

