#include "Date.h"
Date::Date()
{
	dd = 01;
	mm = 01;
	yyyy = 1900;
};
Date::Date(const Date&x)
{
	dd = x.dd;
	mm = x.mm;
	yyyy = x.yyyy;
}
Date::Date(int dd, int mm, int yyyy)
{
	this->dd = dd;		//phan biet doi-tuong-hien-tai "dd" thuoc class Date
	this->mm = mm;
	this->yyyy = yyyy;
};
Date::~Date()
{
	return;
};
/*
int Date::nhapD()
{
	cout << "nhap ngay thang nam:" << endl;
	cin >> dd;
	cin >> mm;
	cin >> yyyy;
	return 0;
};
int Date::xuatD()
{
	cout << "Date: ";
	cout << dd << '/' << mm << '/' << yyyy;
	return 0;
};
*/
istream& operator>>(istream &is, Date &x)
{
	cout << "Nhap ngay thang nam:" << endl;
	is >> x.dd;
	is >> x.mm;
	is >> x.yyyy;
	return is;
};
ostream& operator<<(ostream &os, Date &y)
{
	cout << "Date: ";
	os << y.dd << '/' << y.mm << '/' << y.yyyy;
	return os;
};
