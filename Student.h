#pragma once
#include <string>
using namespace std;



class CStudent
{
private:
	string m_Name;
	long m_Code;
	float m_Math;
	float m_Literature;
public:
	CStudent();
	CStudent(const CStudent &hs);
	CStudent(string Name, long Code, float Math, float Literature);
	string getName();
	long getCode();
	float getMath();
	float getLiterature();
	float AverageGrade();
	friend istream& operator>> (std::istream& is, CStudent &hs);
	friend ostream& operator<< (std::ostream& os, const CStudent &hs);
	friend int operator > ( CStudent hs1, CStudent hs2);
	friend int operator == ( CStudent hs1, CStudent hs2);
	friend int operator < (CStudent hs1, CStudent hs2);
	~CStudent();
};

