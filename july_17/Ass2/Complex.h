#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class cComplex
{
	int real, img;
	static int cnt;
public:
	cComplex();
	cComplex(int, int);
	void setReal(int);
	void setImg(int);
	int getReal();
	int getImg();
	void display();
	static int obj_count();
};