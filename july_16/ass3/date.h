#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class cDate
{
	int day, month, year;
public:
	cDate();
	cDate(int, int, int);
	void acceptDate();
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay();
	int getMonth();
	int getYear();
	void showDate();
};
