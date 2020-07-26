#include"String.h"

cString::cString()
{
	name[0] = '\0';
}

cString::cString(char nm[])
{
	strcpy(name, nm);
}

void cString::accept()
{
	cout << "Enter the name:";
	cin >> name;
}

void cString::Display()
{
	cout << "Name:" << name;
}