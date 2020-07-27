#pragma once
#include"Person.h"

class cEmployee :public cPerson
{
	static int id;
	int sal;
public:
	cEmployee();
	cEmployee(const char[],const char[], int, int);
	void Display();
};
