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

int Date::leapCheck()	//kiem tra nam nhuan (leap year)
{
	if (yyyy % 4 == 0 && yyyy % 100 != 0)	//leap return 1, !leap return 0
		return 1;
	if (yyyy % 400 == 0)
		return 0;
};
int Date::dayCounter()
{
	int dayofmonth[12] = {31,28,31,30,31,30,31,31,30,31 };
	if (leapCheck() == 1)
		dayofmonth[1] = 29;					//check leapYear, TRUE dayofmonth 2 = 29
	int numb = 0;
	for (int i = 1; i <= mm - 1; i++)
		numb = numb + dayofmonth[i - 1];
	return (numb + dd);
};
int Date::endOfYear()
{
	if (dd = 31 && mm == 12)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

Date Date::findDay()
{
	long numb = dayCounter() + 1;
	if (endOfYear() == 1)
	{
		dd = 01; mm = 01, yyyy = yyyy + 1;
	}
	else
	{
		int dayofmonth[12] = { 31,28,31,30,31,30,31,31,30,31 };
		if (leapCheck() == 1)
			dayofmonth[1] = 29;					//check leapYear, TRUE dayofmonth 2 = 29
		for (int i = 1; i <= mm - 1; i++)
			numb = numb - dayofmonth[i - 1];
		dd = numb;
	};
	return (Date);
};

/*
long Date::number()
{
	long numb = 0;
	for (int i = 1; i <= yyyy - 1; i++)
	{
		numb = numb + 365;
		Date temp(1, 1, i);
		if (temp.leapCheck() == 1)
			numb = numb + 1;
	}
	return (numb + number());
};
int Date::creat(int year, int numb)
{
	int dayofmonth[12] = {31,28,31,30,31,30,31,31,30,31};
	Date temp(1, 1, year);
	if (temp.leapCheck() == 1)
		dayofmonth[1] = 29;
	temp.mm = 1;
	while (numb - dayofmonth[temp.mm - 1] >0)
	{
		numb = numb - dayofmonth[temp.mm - 1];
		temp.mm++;
	}
	temp.dd = numb;
	*this = temp;
	return (year, numb);
};
int Date::creat(long numb)
{
	int year = 1;
	int dayofyear = 365;
	while (numb-dayofyear > 0)
	{
		numb = numb - dayofyear;
		year++;
		dayofyear = 365;
		Date temp(1, 1, year);
		if (temp.leapCheck() == 1)
			dayofyear = 366;
	}
	return(year);
};
*
Date Date::nextD()
{
	long numb = number();
	numb = numb + 1;
	Date temp;
	temp.creat(numb);
	return temp;
}
*/