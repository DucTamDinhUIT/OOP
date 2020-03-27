#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private:
	int tu;
	int mau;
//protected:
public:
	PhanSo();
	int nhapPs();
	int xuatPs();
//	int rutGon();
	PhanSo tong(PhanSo);
	PhanSo hieu(PhanSo);
	PhanSo tich(PhanSo);
	PhanSo thuong(PhanSo);
	~PhanSo();
};
