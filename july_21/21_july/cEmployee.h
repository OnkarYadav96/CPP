#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cEmployee
{
	int id;
	char *name;
public:
	cEmployee();
	cEmployee(int, const char*);
	~cEmployee();
	void display();
};
