
#include"Employee.h"

int cEmployee :: id = 1;
cEmployee::cEmployee()
{
	id++;
	sal = 0;
}

cEmployee::cEmployee(const char nm[],const char a[], int i, int sa):cPerson(nm,a)
{
	id = i;
	sal = sa;
}

void cEmployee::Display()
{
	cout << "Employee id :" << id <<endl;
	cout << "Employee Salary:" << sal << endl;
}