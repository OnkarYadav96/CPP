#pragma once
#include"Shape.h"

class cTriangle :public cShape
{
	int base, height,re;
public:
	cTriangle();
	cTriangle(int, int,int);
	void CalArea();
	void CalPeri();

};
