#include"area.h"

cArea::cArea()
{
	length = breadth = 1;
}
cArea::cArea(int l, int b)
{
	length = l;
	breadth = b;
}
int cArea::calculateArea()
{
	return length * breadth;
}
void cArea::showArea()
{
	cout << "\n\tArea:" << calculateArea();
}