/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on December 3rd, 2017, 12:00 PM
 * Purpose:  
 */

#ifndef SMPLEVECTR_H
#define SMPLEVECTR_H

#include<iostream>
#include<new>
#include<cstdlib>
using namespace std;

template <class T>
class SmpleVectr{
    private:
        T *aptr;
        int arrySize;
        void memError();
        void subError();
    public:
        SmpleVectr(){
            aptr=0; arrySize=0;}
        SmpleVectr(int);
        SmpleVectr(const SmpleVectr &);
        ~SmpleVectr();
        
        int size() const{
            return arrySize;}
        T getElmentAt(int position);
        T &operator[](const int &);
};

template<class T>
SmpleVectr<T>::SmpleVectr(int s){
    arrySize=s;
    try{
        aptr=new T[s];
    }
    catch(bad_alloc){
        memError();
    }
    for(int i=0;i<arrySize;i++)
        *(aptr+i)=0;
}

template<class T>
SmpleVectr<T>::SmpleVectr(const SmpleVectr &obj){
    arrySize=obj.arrySize;
    aptr=new T[arrySize];
    if(aptr==0)
        memError();
      for(int i=0;i<arrySize;i++)
        *(aptr+i)=*(obj.aptr+i);
}

template<class T>
SmpleVectr<T>::~SmpleVectr(){
    if(arrySize>0)
        delete[]aptr;
}

template<class T>
void SmpleVectr<T>::memError(){
    cout<<"Error: Allocating Memory Failed!"<<endl;
    exit(EXIT_FAILURE);
}

template<class T>
void SmpleVectr<T>::subError(){
    cout<<"Error: Subscript Failure!"<<endl;
    exit(EXIT_FAILURE);
}

template<class T>
T SmpleVectr<T>::getElmentAt(int sub){
    if(sub<0||sub>=arrySize)
        subError();
    return aptr[sub];
}

template<class T>
T &SmpleVectr<T>::operator[](const int &sub){
    if(sub<0||sub>=arrySize)
        subError();
    return aptr[sub];
}

#endif /* SMPLEVECTR_H */

