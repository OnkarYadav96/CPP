#include"student.h"

cStudent::cStudent()
{
	roll_no = 1;
	strcpy(name, "NULL");
	per = 0;
}
cStudent::cStudent(int r, const char* n, float p)
{
	roll_no = r;
	strcpy(name,n);
	per = p;
}
void cStudent::acceptStudent()
{
	cout << "\n\tEnter Roll Number ";
	cin >> roll_no;
	cout << "\n\tEnter Name ";
	cin >> name;
	cout << "\n\tEnter percentage ";
	cin >> per;
}
void cStudent::displayStudent()
{
	cout << "\n\tStudent Detail";
	cout << "\n\tRoll No.  :" << roll_no;
	cout << "\n\tName      :" << name;
	cout << "\n\tPercentage:" << per;
}
void cStudent::show_result()
{
	if (per >= 35 && per < 50)
		cout << "\n\tResult    :pass";
	else if (per >=50 && per < 60)
		cout << "\n\tResult    :pass with second division";
	else if (per >= 60 && per < 75)
		cout << "\n\tResult    :pass with first division";
	else if(per>=75)
		cout << "\n\tResult    :pass with first distinction";
	else
		cout << "\n\tResult    :Fail";
}   