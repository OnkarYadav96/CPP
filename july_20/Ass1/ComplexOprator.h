#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cComplex
{
	int real, imag;
public:
	cComplex();
	cComplex(int, int);
	cComplex operator + (cComplex &);
	cComplex operator - (cComplex &);
	cComplex operator ++ ();     //pre-increment
	cComplex operator -- (int);  //post-increment
	void Display();
}; 
