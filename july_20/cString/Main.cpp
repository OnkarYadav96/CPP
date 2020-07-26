#include"cString.h"

void main()
{
	cString name, add, city;
	cout << "Enter Name ,Address,City:";
	cin >> name >> add >> city;

	cout << "Name is:" << name<<endl;
	cout << "Address is:" << add<<endl;
	cout << "City is:" << city<<endl;

	char str[] = "seeta";
	cString s1;
	s1.Display();

	cString s2(str);
	s2.Display();


	cString s3(s2);
	s3.Display();

	cString s4;
	s4 = s2;
	s4.Display();

	cout << "\n\n\t";

}