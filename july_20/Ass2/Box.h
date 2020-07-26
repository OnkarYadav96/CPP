#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cBox
{
	int capacity;
public:
	cBox();
	cBox(int);
	void Display();
	
	cBox operator > (cBox&);
};

