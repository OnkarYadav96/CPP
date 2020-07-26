#include"date.h"

int main()
{
	cDate d1;  //call to default constructor
	d1.showDate();

	cDate d2(2, 3, 1997);  //call to parametrized constructor
	d2.showDate();
	 
	d2.setDay(5); //set the day=5
	d2.setMonth(5); //set the month=4
	d2.setYear(2020); //set the year=2020;

	d2.showDate(); //display new values set by above functions.

	int day_in_main = d2.getDay(); //get the value of day associated with object d2.

	cout << "\n\tthe value of day is:" << day_in_main;

	//use of acceptDate

	cDate d3;
	d3.acceptDate();
	d3.showDate();
	cout << "\n\n\n";
}