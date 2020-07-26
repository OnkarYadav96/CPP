#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cString
{
	char name[30];
public:
	cString();
	cString(char[]);
	void accept();
	void Display();
};
