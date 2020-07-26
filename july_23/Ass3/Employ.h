#pragma once
#include"Date.h"
#include"String.h"
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class cEmployee
{
	static int cnt;
	int id;
	int salary;
	cString s;
	cDate d;
public:
	cEmployee();
	void Accept_Emp();
	void Show_Emp();
};