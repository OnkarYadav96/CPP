#pragma once
#include"date.h"

class cStudent
{
	static int roll_no;

	char name[30];
	cDate dob;
public:
	cStudent();
	cStudent(int,char[],int,int,int);
	void Accept();
	void Display();
};
