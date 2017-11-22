/* 
 * File:   date.h
 * Author: Andrew Pena
 * Created on November 22nd, 2017, 8:47 PM
 * Purpose: Date with Class
 */

#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date{
    private:
        int mnth;
        int day;
        int year;
        static std::string const mnthNme[12]; //String for Month Names
        void setDy(int);
	void setMnth(int);
	void setYr(int);
        
    public:    
        //Constructors
	Date();
	Date(int, int, int);
        
	//Functions for Date Formats
	void date1();
	void date2();
	void date3();
};

#endif /* DATE_H */