#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#ifndef ADDR_
#define ADDR_

class cAddress
{
	char *city;
	char *area;
public:
	cAddress();
	cAddress(const char*, const char*);
};

#endif // !ADDR_

