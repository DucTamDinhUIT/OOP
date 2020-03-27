#include "PhanSo.h"

PhanSo::PhanSo()
{
	tu = 0;
	mau = 1;
}

PhanSo::~PhanSo()
{
}

int PhanSo::nhapPs() 
{
	cin>>this->tu;
	cin>>this->mau;
	return 0;
}
int PhanSo::xuatPs()
{
	cout << tu << '/' << mau << endl;
	return 0;
}
/*

int PhanSo::rutGon()
{
	int a = abs(tu);
	int b = abs(mau);
	while (a*b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	tu = tu / (a + b);
	mau = mau / (a + b);
	return tu, mau;
}
*/
	//kieu du lieu: PhanSo
	//ten class: PhanSo
	//ten phuong thuc: PhanSo
	//tham so: x
PhanSo PhanSo::tong(PhanSo x)
{
	PhanSo temp;
	temp.tu = tu * x.mau + mau * x.tu;
	temp.mau = mau * x.mau;
	return temp;
}
PhanSo PhanSo::hieu(PhanSo x)
{
	PhanSo temp;
	temp.tu = tu * x.mau - mau * x.tu;
	temp.mau = mau * x.mau;
	return temp;
}
PhanSo PhanSo::tich(PhanSo x)
{
	PhanSo temp;
	temp.tu = tu * x.tu;
	temp.mau = mau * x.mau;
	return temp;
}
PhanSo PhanSo::thuong(PhanSo x)
{
	PhanSo temp;
	temp.tu = tu * x.mau;
	temp.mau = mau * x.tu;
	return temp;
}


