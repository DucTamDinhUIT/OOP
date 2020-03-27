#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private:
	int tu;
	int mau;
public:
	int nhapPs();
	int xuatPs();
	PhanSo soSanh(PhanSo);
};

