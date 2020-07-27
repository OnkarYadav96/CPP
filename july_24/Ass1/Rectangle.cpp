#include"Rectangle.h"

cRectangle::cRectangle()
{
	len = bre = 0;
}

cRectangle::cRectangle(int l, int b)
{
	len = l;
	bre = b;
}

void cRectangle::Calculate_Area()
{
	int Tarea;
	Tarea = len * bre;
	cout << "Rectangle area:"<<Tarea<<endl;
}