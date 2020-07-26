#include"Student.h"

void main()
{
	int no;
	cStudent *k;
	cout << "Enter the number of Student:";
		cin >> no;

		k = new cStudent[no];
		for (int i = 0; i < no; i++)
		{
			k[i].Accept();
		}

		for (int i = 0; i < no; i++)
		{
			k[i].Display();
		}
}
