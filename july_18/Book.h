#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cBook
{
	static int cnt;
	int bno;
	char name[30];
	float price;
public:
	cBook();
	cBook(const char*, float);
	void Accept();
	void Display();
	void set_Price(float);
	float get_Price();


};



