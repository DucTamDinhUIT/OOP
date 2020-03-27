#include "PhanSo.h"

int PhanSo::nhapPs() 
{
	cout << "Nhap tu&mau cua phan so: " << endl;
	cin>>this->tu;
	cin>>this->mau;
	return 0;
}
int PhanSo::xuatPs()
{
	cout << tu << '/' << mau << endl;
	return 0;
}
int PhanSo::rutGon()
{
	int a = abs(tu);	//lay abc cua tu so
	int b = abs(mau);	//abs mau so
	while (a*b != 0)	//khac 0 & hop le
	{
		if (a > b)		//tim hieu cua tu&mau
			a = a - b;
		else
			b = b - a;
	}
	tu = tu / (a + b);		//khong hieu gi luon
	mau = mau / (a + b);	//thuat toan Euclid
	return tu, mau;
}


