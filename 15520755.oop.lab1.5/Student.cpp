#include "Student.h"
Student::Student()
{
	sName = "viet nam";
	fMath = 0;
	fLiter = 0;
	fGpa = 0;
}
Student::Student(string n, float m, float l, float g)
{
	this->sName = n;
	this->fMath = m;
	this->fLiter = l;
	this->fGpa = g;
}
Student::~Student()
{
}
;
/*
int Student::nhapS()
{
	cout << "Nhap ho&ten hoc sinh: ";
	getline(cin,sName);
	cout << "Nhap diem Toan: ";
	cin >> fMath;
	cout << "Nhap diem Van: ";
	cin >> fLiter;
	return 0;
};
int Student::xuatS() 
{
	cout << "Sinh vien: " << sName;
	cout << " co diem trung binh: " << fGpa;
	return 0;
};
*/
int Student::gpaS()
{
	fGpa = (fMath + fLiter) / 2;
	return fGpa;
};
istream& operator>>(istream &is, Student &x)
{
	cout << "Nhap ten cua hoc sinh: ";
	getline(is, x.sName);
	cout << "Nhap diem Toan hoc sinh: ";
	is >> x.fMath;
	cout << "Nhap diem Van hoc sinh: ";
	is >> x.fLiter;
	return is;
};
ostream& operator<<(ostream &os, Student &y)
{
	os << "Hoc sinh " << y.sName << " co GPA = " << y.fGpa;
	return os;
};

//ten lop Student
// :: toan tu gan
//
/*
Student& Student::operator=(const Student&x) 
{
	sName	= x.sName;	//sName la thuoc tinh cua doi tuong duoc goi = phuong thuc "operator="
	fMath	= x.fMath;	//x la tham so dau vao -> x.**** la thuoc tinh cua tham so dau vao
	fLiter	= x.fLiter;
	fGpa	= x.fGpa;
	return *this;		//*this la ??
	//	toan tu gan operator= duoc cai-dat ben trong class "Student" nhu phuong thuc cua class
	//	Mien-gia-tri cua mot bien-con-tro la dia-chi o-nho
	//	Ben trong than cua mot phuong-thuc, this la mot con-tro doi-tuong 
	//	thuoc ve lop ma phuong-thuc do thuoc ve
	//	Ben trong than cua mot lop (class), this la mot con-tro doi-tuong
	//	GIU~ dia-chi cua lop doi-tuong dang goi thuc hien phuong-thuc
	//	Hon nua, *this chinh la doi-tuong dang goi thuc hien phuong-thuc
};
*/
