#include"date.h"

cDate::cDate()
{
	dd = mm = 1;
	yy = 2000;
}

cDate::cDate(int d, int m, int y)
{
	dd = d;
	mm = m;
	yy = y;
}

void cDate::Accept()
{
	cout << "Enter date in dd/mm/yy format:";
	cin >> dd >> mm >> yy;
}

void cDate::Display()
{
	cout << "Date of Birth is:" << dd << "/" << mm << "/" << yy << endl;
}

