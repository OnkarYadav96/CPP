#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cString
{
	int len;
    char *str;
public:
	cString();
	cString(char*);
	cString(cString&);
	 cString operator = (cString&);
	void Display();

	friend istream& operator>>(istream&,cString &);
	friend ostream& operator<<(ostream&, cString&);

	~cString();

};
