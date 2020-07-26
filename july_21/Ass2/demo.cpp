#include "demo.h"


Const_and_Ref::Const_and_Ref(int nr, int &no, int nn) : ref(no), con(nr)
{
	n = nn;
	//ref = n;
}

void Const_and_Ref::display()  //for display all member values.
{
	cout << "constant member is : " << con << endl; // desplaying constant member.
	cout << "reference member is : " << ref << endl;  //displaying reference member.
}

int Const_and_Ref::ret_n()
{
	return n;
}