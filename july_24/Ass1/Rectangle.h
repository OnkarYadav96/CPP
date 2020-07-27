#include"Shape.h"

class cRectangle:public cShape
{
	int len;
	int bre;
public:
	cRectangle();
	cRectangle(int, int);
	void Calculate_Area();
};
