//	@project: OOP Lab1.4
//	@Source.cpp
//	@purpose: Find the next day!
//
//	@author 15520755@gm.uit.edu.vn
#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
	Date a;
//	a.nhapD();
//	Date kq = a.nextD();
//	a.xuatD();
	cin >> a;
	//Date kq = a.nextD();
	cout << "hien thi leapYear: co(1)/khong(0): " << a.leapCheck() << endl;
	cout << a.dayCounter() << endl; //tinh so thu tu ngay trong nam
	cout << a.endOfYear() << endl;
	cout << a;
//	cout << kq;
	return 1;
}
