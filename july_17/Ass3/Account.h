#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class cAccount
{
	static int cnt;
	int acc_no;
	char name[20];
	float bal;
public:
	cAccount();
	cAccount(const char*, float);

	void setName(const char*);
	void setBal(float);

	char* getName();
	int getAcc_No();
	float getBal();
	void display();
};

