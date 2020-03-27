//	OOP Lab1.3
//	Source.cpp
//	Purpose: Rut gon PhanSo
//
//	@author 15520755@gm.uit.edu.vn
#include"PhanSo.h"
#include <iostream>
using namespace std;
int main()
{
	PhanSo a, b, c, ss;
	cout << "nhap phan so thu nhat:" << endl;
	a.nhapPs();
	cout << "nhap phan so thu hai:" << endl;
	b.nhapPs();
	cout << "nhap phan so thu ba:" << endl;
	c.nhapPs();
	ss = a.soSanh(b);
	ss = ss.soSanh(c);
	cout << "phan so lon nhat la: ";
	ss.xuatPs();
}