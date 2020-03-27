#pragma once
#include <iostream>
using namespace std;
class Student
{
private:
	string sName;
	float fMath;
	float fLiter;
	float fGpa;
public:
	Student();
	~Student();
	int nhapS();
	int gpaS();
	int xuatS();
	//khai bao lop Student
	//tu khoa trung tam "operator="
	//const khong thay doi tham chieu dau vao
//	Student& operator=(const Student &);
	Student(string,float,float,float);
//	friend istream& operator>>(istream &, Student &);
//	friend ostream& operator<<(ostream &, Student &);
};

