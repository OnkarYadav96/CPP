#include"Rectangle.h"
#include"Shape.h"
#include"Squre.h"

int main()
{
	cShape s1;
	s1.Calculate_Area();

	cRectangle r1(5, 4);
	r1.Calculate_Area();
	cSqure s2(5);
	s2.Calculate_Area();
}