#include"Book.h"

int cBook::cnt;

cBook::cBook()
{
	cnt++;
	bno = cnt;
	price = 0;
}

cBook::cBook(const char *nm,float p)
{
	cnt++;
	strcpy(name, nm);
	price = p;
}

void cBook::Accept()
{
	char name[20];
	cout << "Enter the book name:";
	cin >> name;
	strcpy(this->name, name);
	cout << "Enter the book price:";
	cin >> price;
}

float cBook::get_Price()
{
	return price;
}

void cBook::set_Price(float f)
{	
	price = f;
}

void cBook::Display()
{
	cnt++;
	cout << "Book no:" << cnt << endl;
	cout << "Book name:" << name << endl;
	cout << "Book Price:" << price << endl;
}