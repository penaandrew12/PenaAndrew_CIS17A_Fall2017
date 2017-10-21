/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:00 PM
 * Purpose: Circle Class
 */

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
    private:
        float radius;
        float pi;
    
    public:
        Circle();
        void setRadius();   //Set Radius
        float getRadius(){  //Get Radius
            return radius;} 
        float getArea(){    //Get Area
            return pi*radius*radius;}
        float getDia(){     //Get Diameter
            return radius*2;}
        float getCircum(){  //Get Circumference
            return 2*pi*radius;}
};

#endif /* CIRCLE_H */

