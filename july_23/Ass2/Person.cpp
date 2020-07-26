#include"Person.h"

cPerson::cPerson()
{
}

void cPerson::accept()
{
	cout << "**********Enter Person Details*********" << endl;
	nn.accept();
	aa.accept();
}

void cPerson::display()
{
	cout<<"***************Person Details : ***************"<<endl;
	 nn.display();
	 aa.display();
}