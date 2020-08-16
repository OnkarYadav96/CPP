#include"Squre.h"

cSqure::cSqure()
{

}

cSqure::cSqure(int s)
{
	side = s;
}

void cSqure::CalArea()
{
	cout << "Enter the side : ";
	cin >> side;
	int area;
	area = side * 4;
	cout << "Squre area is : " << area << endl;

}