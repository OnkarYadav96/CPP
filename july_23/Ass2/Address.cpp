#include"Address.h"

cAddress::cAddress()
{
	area[0] = '\0';
	city[0] = '\0';
	pin = 1;
}

cAddress::cAddress(char a[], char c[], int p)
{
	strcpy(area, a);
	strcpy(city, c);
	pin = p;
}

void cAddress::accept()
{
	cout << "Enter the Area:";
	cin >> area;
	cout << "Enter Your City:";
	cin >> city;
	cout << "Enter pin:";
	cin >> pin;
}

void cAddress::display()
{
	cout << "Area: " << area<<endl;
	cout << "City: " << city<<endl;
	cout << "Pin No" << pin<<endl;
}
