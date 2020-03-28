#pragma once
#include <iostream>
#include <string>
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
	Student(string, float, float, float);
//	int nhapS();
	int gpaS();
//	int xuatS();
	friend istream& operator>>(istream &, Student &);
	friend ostream& operator<<(ostream &, Student &);
	//khai bao lop Student
	//tu khoa trung tam "operator="
	//const khong thay doi tham chieu dau vao
//	Student& operator=(const Student &);

};

