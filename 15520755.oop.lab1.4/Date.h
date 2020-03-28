#pragma once
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;
class Date
{
private:
	int dd;
	int mm;
	int yyyy;
public:
	Date();
	Date(const Date&);
	Date(int, int, int);
	~Date();
//	int nhapD();
//	int xuatD();
	friend istream& operator>>(istream &, Date &);
	friend ostream& operator<<(ostream &, Date &);
//	Date nextD();
	int leapCheck();		//Check leapYear;
	int dayCounter();		//count day of year;
	int endOfYear();		//check 31/12;
//	long number();
//	int creat(int, int);
//	int creat(long);

	Date findDay();

};

#endif // COUNTER_H