#include"Person.h"

cPerson::cPerson()
{
	strcpy(name, "null");
	age = 0;
	strcpy(city, "null");
}
cPerson::cPerson(const char* n, int a, const char* c)
{
	strcpy(name, n);
	age = a;
	strcpy(city, c);
}
void cPerson::setName(const char* n)
{
	strcpy(name, n);
}
void cPerson::setAge(int a)
{
	age = a;
}
void cPerson::setCity(const char* c)
{
	strcpy(city, c);
}
char* cPerson::getName()
{
	return name;
}
int cPerson::getAge()
{
	return age;
}
char* cPerson::getCity()
{
	return city;
}
void cPerson::display()
{
	cout << "\n\tName:" << name;
	cout << "\n\tAge :" << age;
	cout << "\n\tCity:" << city;
}