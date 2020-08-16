#pragma once
#include"Shape.h"

class cRect :public cShape
{
	int side;
public:
	cRect();
	cRect(int);
	void CalArea();
	void CalPeri();
};
