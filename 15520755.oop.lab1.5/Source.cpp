//-------------------------------------------------------------------
//	OOP Lab1.5
//	Source.cpp
//	Purpose: Nhap ho&ten diemtoan diemvan, cout GPA= (dToan+dVan)/2
//
//	@author 15520755@gm.uit.edu.vn
//-------------------------------------------------------------------
#include"Student.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	Student a;
//	a.nhapS();
	cin >> a;
	a.gpaS();
//	a.xuatS();
	cout << a;
	return 0;
}