#include"Employ.h"

void main()
{
	int no;
	cEmployee *k;
	cout << "Enter the number of Persons:";
	cin >> no;

	k = new cEmployee[no];
	for (int i = 0; i < no; i++)
	{
		k[i].Accept_Emp();
	}

	for (int i = 0; i < no; i++)
	{
		k[i].Show_Emp();
	}
}
