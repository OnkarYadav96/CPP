#pragma once
#include"Address.h"
#include"String.h"

class cPerson
{
	cString nn;
	cAddress aa;
public:
	cPerson();
	
	void accept();
	void display();
};
