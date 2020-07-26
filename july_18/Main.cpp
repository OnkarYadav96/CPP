#include"Book.h"

int main()
{
	cBook c[3];
	int maxprice = 0, i;

	for ( i = 0; i < 3; i++)
	{
		c[i].Accept();
	}

	for (i = 0; i < 3; i++)
	{
		c[i].Display();
		if (c[i].get_Price() > maxprice)
			maxprice = c[i].get_Price();
	}

	cout << "\n\n\t Max Price :" << maxprice;
	cout << "\n\n\t";
}