#include"Student.h"

cStudent::cStudent()
{
	noSubject =0;
	marks = new int[noSubject];
}

cStudent::cStudent(int noSubject)
{
	this->noSubject = noSubject;
	marks = new int[noSubject];
}

cStudent::~cStudent()
{
	free(marks);
}

void cStudent::accept()
{
	cout << "Enter How many subject are there :";
	cin>>noSubject;
	marks = new int[noSubject];
	cout << "Enter the marks of student " << noSubject << "subject :";
	for (int i = 0; i < noSubject; i++)
		cin >> marks[i];
}

void cStudent::display()
{
	for (int i = 0; i < noSubject; i++)
		cout << "Student marks are:" << marks[i] << endl;
}