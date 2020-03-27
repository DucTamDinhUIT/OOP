#include "PhanSo.h"
int PhanSo::nhapPs()
{
	cin >> this->tu;
	cin >> this->mau;
	return 0;
};
int PhanSo::xuatPs()
{
	cout << tu << '/' << mau << endl;
	return 0;
};

PhanSo PhanSo::soSanh(PhanSo x)
{
	PhanSo temp;
	if ((tu * x.mau) >= (mau * x.tu))
	{
		temp.tu = tu;
		temp.mau = mau;
	}
	else
	{
		temp.tu = x.tu;
		temp.mau = x.mau;
	};
	
	return temp;
};
