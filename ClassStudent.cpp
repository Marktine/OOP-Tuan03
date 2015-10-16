#include "ClassStudent.h"
#include "Student.h"
#include <iostream>
using namespace std;

CClassStudent::CClassStudent()
{
	m_Amount = 0;
	m_Student = new CStudent[m_Amount];
}

CClassStudent::CClassStudent(const CClassStudent &students)
{
	m_Amount = students.m_Amount;
	for (int i = 0; i < m_Amount; i++)
	{
		m_Student[i] = students.m_Student[i];
	}
}

CClassStudent::CClassStudent(CStudent* student, int Amount)
{
	m_Amount = Amount;
	for (int i = 0; i < m_Amount; i++)
	{
		m_Student[i] = student[i];
	}
}


void CClassStudent::Input()
{
	cout << "Nhap vao so hoc sinh: ";
	cin >> m_Amount;
	m_Student = new CStudent[m_Amount];
	for (int i = 0; i < m_Amount; i++)
	{
		cin >> m_Student[i];
	}
}

void CClassStudent::Output()
{
	for (int i = 0; i < m_Amount; i++)
	{
		cout << m_Student[i];
	}
}

CStudent CClassStudent::Max()
{
	CStudent max = this->m_Student[0];
	for (int i = 0; i < this->m_Amount; i++)
	{
		if (max < this->m_Student[i])
		{
			max = this->m_Student[i];
		}
	}
	return max;
}

CStudent CClassStudent::Min()
{
	CStudent min = m_Student[0];
	for (int i = 0; i < m_Amount; i++)
	{
		if (min > m_Student[i])
		{
			min = m_Student[i];
		}
	}
	return min;
}

void CClassStudent::Ascending()
{
	for (int j = 1; j < this->m_Amount; j++)
	{
		CStudent key = m_Student[j];
		int i = j - 1;
		while (i >= 0 && m_Student[i].AverageGrade() > key.AverageGrade())
		{
			m_Student[i + 1] = m_Student[i];
			i--;
		}
		m_Student[i + 1] = key;
	}
}

void CClassStudent::Descending()
{
	for (int j = 1; j < this->m_Amount; j++)
	{
		CStudent key = m_Student[j];
		int i = j - 1;
		while (i >= 0 && m_Student[i].AverageGrade() < key.AverageGrade())
		{
			m_Student[i + 1] = m_Student[i];
			i--;
		}
		m_Student[i + 1] = key;
	}
}

void CClassStudent::Delete(long mssv)
{
	for (int i = 0; i < this->m_Amount; i++)
	{
		if (this->m_Student[i].getCode() == mssv)
		{
			for (int j = i; j < this->m_Amount - 1; j++)
			{
				this->m_Student[i] = this->m_Student[i + 1];
			}
		}
	}
	this->m_Amount--;
}

CStudent CClassStudent::Find(long mssv)
{
	CStudent sv;
	Ascending();
	int left = 0, right, mid;
	right = m_Amount - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (m_Student[mid].getCode() > mssv) right = mid - 1;
		else if (m_Student[mid].getCode() < mssv) left = mid + 1;
		else return m_Student[mid];
	}
	if (left > right)
		return sv;
}

CClassStudent::~CClassStudent()
{
	delete[] m_Student;
}
