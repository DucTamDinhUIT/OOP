//	OOP Lab1.1
//	Source.cpp
//	Purpose: Rut gon PhanSo
//
//	@author 15520755@gm.uit.edu.vn

#include"PhanSo.h"
#include<iostream>
using namespace std;

int main()
{
	PhanSo a; //a&b la doi-tuong thuoc lop-doi-tuong PhanSo
	a.nhapPs(); //doi-tuong a goi-thuc-hien  phuong thuc "nhapPS"
	cout << "phan so sau rut gon la:" << endl;
	a.rutGon();
	a.xuatPs();
	return 1;
}