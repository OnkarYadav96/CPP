#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cDate
{
	int dd, mm, yy;
public:
	cDate();
	cDate(int, int, int);
	void Accept();
	void Display();
};

