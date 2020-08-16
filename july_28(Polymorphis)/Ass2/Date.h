#pragma once
#include"Date.h"
#include<iostream>
using namespace std;

#ifndef DT_
#define DT_

class cDate
{
	int day, month, year;
public:
	cDate();
	cDate(int, int, int);
	void Display();
};
#endif // !DT_

