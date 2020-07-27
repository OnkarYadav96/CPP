#include"Squre.h"

cSqure::cSqure(int t)
{
	side = t;
}

void cSqure::Calculate_Area()
{
	int total;
	total = side * 4;
	cout << "Area of Squre is :" << total<<endl;
}