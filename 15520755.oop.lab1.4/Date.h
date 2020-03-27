#pragma once
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

};

