#pragma once
#include"Shape.h"

class cSqure :public cShape
{
	int side;
public:
	cSqure(int);
	void Calculate_Area();
};
