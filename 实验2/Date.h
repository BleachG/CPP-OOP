#pragma once
#include <iostream>
using namespace std;
class Date
{
public:
	Date(int = 1, int = 1, int = 2000); // default constructor
	void print(); // print function
	void setDate(int, int, int); // set month, day, year
	void setMonth(int); // set month
	void setDay(int); // set day
	void setYear(int); // set year
	int getMonth(); // get month
	int getDay(); // get day
	int getYear(); // get year 
	void nextday();
private:
	int month; // 1-12
	int day; // 1-31 (except February(leap year), April, June, Sept, Nov)
	int year; // 1900+
	bool leapYear(); // leap year
	int monthDays(); // days in month 
};

