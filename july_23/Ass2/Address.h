#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cAddress
{
	char area[20];
	char city[20];
	int pin;
public:
	cAddress();
	cAddress(char[], char[], int);
	void accept(); 
	void display();
};
