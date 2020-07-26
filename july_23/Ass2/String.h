#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cString
{
	char pname[20];
public:
	cString();
	cString(char[]);
	void accept();
	void display();
};
