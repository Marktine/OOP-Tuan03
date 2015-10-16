#include "Student.h"
#include <iostream>
using namespace std;

CStudent::CStudent()
{
	m_Name = "No name";
	m_Code = 0;
	m_Math = 0.0;
	m_Literature = 0.0;
}

CStudent::CStudent(const CStudent &hs)
{
	m_Name = hs.m_Name;
	m_Code = hs.m_Code;
	m_Math = hs.m_Math;
	m_Literature = hs.m_Literature;
}

CStudent::CStudent(string Name, long Code, float Math, float Literature)
{
	m_Name = Name;
	m_Code = Code;
	m_Math = Math;
	m_Literature = Literature;
}

string CStudent::getName()
{
	return m_Name;
}

long CStudent::getCode()
{
	return m_Code;
}

float CStudent::getMath()
{
	return m_Math;
}

float CStudent::getLiterature()
{
	return m_Literature;
}

float CStudent::AverageGrade()
{
	float av;
	av = (m_Math + m_Literature) / 2;
	return av;
}

 istream& operator>>(std::istream& is, CStudent &hs)
{
	cout << "Nhap Ho Ten: ";
	is.ignore();
	fflush(stdin);
	getline(is,hs.m_Name);
	cout << "Nhap ma so: ";
	is >> hs.m_Code;
	cout << "Nhap diem van: ";
	is >> hs.m_Literature;
	cout << "Nhap diem Toan: ";
	is >> hs.m_Math;
	return is;
}

 ostream& operator<<(std::ostream& os,const CStudent &hs)
 {
	 os << "Ho Ten: " << hs.m_Name << endl;
	 os << "Ma so: " << hs.m_Code << endl;
	 os << "Diem Van: " << hs.m_Literature << endl;
	 os << "Diem Toan: " << hs.m_Math << endl;
	 return os;
 }

 int operator > (CStudent hs1,CStudent hs2)
 {
	 if (hs1.AverageGrade() > hs2.AverageGrade())
	 {
		 return 1;
	 }
	 return 0;
 }

 int operator == (CStudent hs1, CStudent hs2)
 {
	 if (hs1.AverageGrade() == hs2.AverageGrade())
	 {
		 return 1;
	 }
	 return 0;
 }

 int operator < (CStudent hs1, CStudent hs2)
 {
	 if (hs1.AverageGrade() < hs2.AverageGrade())
	 {
		 return 1;
	 }
	 return 0;
 }

CStudent::~CStudent()
{
}
