#include"Student.h"
int cStudent::roll_no = 1;

cStudent::cStudent()
{
	roll_no++;
	name[0]= '\0';
}

cStudent::cStudent(int r, char nm[], int d, int m, int y)
{
	r++;
	roll_no = r;
	strcpy(name, nm);
	dob = cDate(d, m, y);
}

void cStudent::Accept()
{
	//char name[30];
	cout << "Enter student name:";
	cin >> name;
	dob.Accept();
}

void cStudent::Display()
{
	cout << "**********Student info*********** "<< endl;
	cout << "Roll no:" << roll_no << endl;
	cout << "Name:" << name << endl;
	dob.Display();
}