/* 
 * File:   date.h
 * Author: Andrew Pena
 * Created on October 16, 2017, 8:47 PM
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
        string mnthNme[12]={"January", "February", "March", "April",
                          "May", "June", "July", "August",
                          "September", "October", "November", "December"};
        void setDy(int);
	void setMnth(int);
	void setYr(int);
        
    public:    
        //Constructors
	Date();
	Date(int, int, int);
        
	//Destructor 
	~Date(){}
        
	//Functions for Date Formats
	void date1();
	void date2();
	void date3();
};

#endif /* DATE_H */

