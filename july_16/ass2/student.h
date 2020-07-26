#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class cStudent
{
	int roll_no;
	char name[20];
	float per;
public:
	cStudent();
	cStudent(int,const char*,float);
	void acceptStudent();
	void displayStudent();
	void show_result();
};