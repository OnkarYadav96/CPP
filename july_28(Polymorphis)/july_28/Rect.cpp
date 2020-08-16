#include"Rect.h"

cRect::cRect()
{
}

cRect::cRect(int l, int b)
{
	len = l;
	bre = b;
}

void cRect::CalArea()
{
	cout << "Enter len and Bre : ";
	cin >> len >> bre;
	int area;
	area = len * bre;
	cout << "Area of Rectangle is: " << area << endl;
}