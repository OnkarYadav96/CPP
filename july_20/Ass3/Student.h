#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cStudent
{
	int noSubject;
	int* marks;

public:
	cStudent();
	cStudent(int);

	~cStudent();

	void accept();
	void display();
};


