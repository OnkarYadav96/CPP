#include"Person.h"

void main()
{
	int no;
	cPerson *k;
	cout << "Enter the number of Persons:";
	cin >> no;

	k = new cPerson[no];
	for (int i = 0; i < no; i++)
	{
		k[i].accept();
	}

	for (int i = 0; i < no; i++)
	{
		k[i].display();
	}
}
