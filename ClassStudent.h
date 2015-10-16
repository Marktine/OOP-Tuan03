#pragma once
#ifndef _C_CLASS_STUDENT_
#define _C_CLASS_STUDENT
#include "Student.h"
class CClassStudent
{
private:
	CStudent* m_Student;
	int m_Amount;
public:
	CClassStudent();
	CClassStudent(const CClassStudent &students);
	CClassStudent(CStudent* Students, int Amount);
	void Input();
	void Output();
	CStudent Max();
	CStudent Min();
	void Ascending();
	void Descending();
	void Delete(long mssv);
	CStudent Find(long mssv);
	~CClassStudent();

};

#endif