//	OOP Lab1.2
//	Source.cpp
//	Purpose: +-*/ 2phanso
//
//	@author 15520755@gm.uit.edu.vn
#include"PhanSo.h"
#include<iostream>
using namespace std;
int main()
{
	PhanSo a,b,kq;	//a&b la doi-tuong thuoc lop-doi-tuong PhanSo
					//kq la doi-tuong thuoc lop-doi-tuong PhanSo
	cout << "Nhap phan so thu nhat:" << endl;
	a.nhapPs();		//doi-tuong a goi-thuc-hien  phuong thuc "nhapPS"
	cout << "Nhap phan so thu hai:" << endl;
	b.nhapPs(); 
	cout << "Tong hai phan so la" << endl;
	kq = a.tong(b);	//doi-tuong a goi-thuc-hien phuong thuc "tong" voi doi so la "b"
	kq.xuatPs();
	cout << "Hieu hai phan so la" << endl;
	kq = a.hieu(b);
	kq.xuatPs();
	cout << "Tich hai phan so la" << endl;
	kq = a.tich(b);
	kq.xuatPs();
	cout << "Thuong hai phan so la" << endl;
	kq = a.thuong(b);
	kq.xuatPs();
	return 1;
}