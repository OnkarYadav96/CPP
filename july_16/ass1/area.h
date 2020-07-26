#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class cArea
{
	int length;
	int breadth;
public:
	cArea();
	cArea(int, int);
	int calculateArea();
	void showArea();
};