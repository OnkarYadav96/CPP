#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class cPerson
{
	char name[20];
	int age;
	char city[10];
public:
	cPerson();
	cPerson(const char*, int, const char*);
	void setName(const char*);
	void setAge(int);
	void setCity(const char*);
	char* getName();
	int getAge();
	char* getCity();
	void display();
};