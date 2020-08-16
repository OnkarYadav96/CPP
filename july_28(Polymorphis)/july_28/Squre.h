#pragma once
#include"Shape.h"

class cSqure :public cShape
{
	int side;
public:
	cSqure();
	cSqure(int);
	void CalArea();
};

