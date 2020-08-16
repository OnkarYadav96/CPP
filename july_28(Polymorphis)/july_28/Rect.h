#pragma once
#include"Shape.h"

class cRect :public cShape
{
	int len, bre;
public:
	cRect();
	cRect(int, int);
	void CalArea();
};
