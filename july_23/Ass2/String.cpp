#include"String.h"

cString::cString()
{
	pname[0] = '\0';
}

cString::cString(char nm[])
{
	strcpy(pname, nm);
}

void cString::accept()
{
	cout << "Enter the Person name:";
	cin >> pname;
}

void cString::display()
{
	cout << "Name : " << pname << endl;
}