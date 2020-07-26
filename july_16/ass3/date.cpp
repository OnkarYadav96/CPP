#include"date.h"

cDate::cDate()
{
	day = month = 1;
	year = 2000;
}
cDate::cDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void cDate::acceptDate()
{
	cout << "\n\tenter day ";
	cin >> day;
	cout << "\n\tenter Month" ;
	cin >> month;
	cout << "\n\tenter Year ";
	cin >> year;
}
void cDate::setDay(int d)
{
	day = d;
}
void cDate::setMonth(int m)
{
	month = m;
}
void cDate::setYear(int y)
{
	year = y;
}
int cDate::getDay()
{
	return day;
}
int cDate::getMonth()
{
	return month;
}
int cDate::getYear()
{
	return year;
}
void cDate::showDate()
{
	cout << "\n\tDate:" << day << "/" << month << "/" << year;
}