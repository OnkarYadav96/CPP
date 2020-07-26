#include"Box.h"

cBox::cBox()
{
	capacity = 0;
}

cBox::cBox(int c)
{
	capacity = c;
}


cBox cBox::operator >(cBox &obj)
{
	if (this->capacity > obj.capacity)
		return 1;
	return 0;
}

void cBox::Display()
{
	cout << "*********Box Capacity*******************" << endl;
}