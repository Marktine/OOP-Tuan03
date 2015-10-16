#include "Student.h"
#include "ClassStudent.h"
#include <iostream>
using namespace std;

int main()
{
	CClassStudent s;
	long mssv;
	s.Input();
	s.Output();
	cout << "Sinh vien co DTB cao nhat la: \n";
	cout << s.Max();
	cout << "\n--------------------------------------------\n";
	s.Descending();
	s.Output();
	cout << "\n--------------------------------------------\n";
	cout << "Nhap vao ma so sinh vien: ";
	cin >> mssv;
	//s.Delete(mssv);
	//s.Output();
	cout << s.Find(mssv);
	return 0;
}