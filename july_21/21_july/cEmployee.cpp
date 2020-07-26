#include"cEmployee.h"

cEmployee::cEmployee()
{
	id = 1;
	name = new char[1];
	name[0] = '\0';
}

cEmployee::cEmployee(int i, const char *n)
{
	id = i;
	name = new char[strlen(n) + 1];
	strcpy(this->name, n);
}

cEmployee::~cEmployee()
{
	delete[] name;
}

void cEmployee:: display()
{
	cout << "Employee id :" << id << " and Employee name is :" << name<<endl;
	cout << "\n\n";
}