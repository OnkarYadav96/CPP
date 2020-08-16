#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#ifndef STR_
#define STR_

class cString
{
	char *Nm;
public:
	cString();
	cString(const char*);
};
#endif // !STR_

