/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 12th, 2017, 12:00 PM
 * Purpose: Feet Inches Modification from Book
 */

#include <cstdlib>
#include "feetInches.h"
using namespace std;

void FeetInches::simplify(){
    if(inches>=12){
        feet+=(inches/12);
        inches=inches%12;
    }
    else if(inches<0){
        feet-=((abs(inches)/12)+1);
        inches=12-(abs(inches)%12);
    }
}

// overloaded < operator
bool FeetInches::operator <=(const FeetInches &d) {
    if(feet <= d.feet) {
    return true;
    }
        if(feet == d.feet && inches <= d.inches) {
        return true;
        }
    return false;
}

bool FeetInches::operator >=(const FeetInches &d) {
    if(feet >= d.feet) {
    return true;
    }
        if(feet == d.feet && inches >= d.inches) {
        return true;
        }
    return false;
}

bool FeetInches::operator !=(const FeetInches &d) {
    if(feet !=d.feet) {
    return true;
    }
        if(feet == d.feet && inches != d.inches) {
        return true;
        }
    return false;
}