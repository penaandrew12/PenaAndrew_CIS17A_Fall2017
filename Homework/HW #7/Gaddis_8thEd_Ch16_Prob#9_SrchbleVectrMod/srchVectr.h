/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on December 3rd, 2017, 12:00 PM
 * Purpose:  
 */

#ifndef SRCHVECTR_H
#define SRCHVECTR_H

#include <vector>
#include "smpleVectr.h"
using namespace std;

template <class T>
class SrchbleVectr:public SmpleVectr<T>{
    public:
        SrchbleVectr():SmpleVectr<T>(){}
        SrchbleVectr(int size):SmpleVectr<T>(size){}
        SrchbleVectr(const SrchbleVectr &);
};

template<class T>
SrchbleVectr<T>::SrchbleVectr(const SrchbleVectr &obj):SmpleVectr<T>(obj.size()){
    for(int i=0;i<this->size();i++)
        this->operator[](i)=obj[i];
}

#endif /* SRCHVECTR_H */

