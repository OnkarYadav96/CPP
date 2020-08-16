#include"smanager.h"

void main()
{
	cEmployee e1(101, "seeta", 40000);
	e1.Display();

	cManager mg1(202, "Neeta", 20000, 300, 400);
	mg1.Display();

	cSalesPerson sp1(303, "Geeta", 50000, 200, 30);
	sp1.Display();

	cSalesManager sm1(404, "Ajay", 30000, 400, 40, 300, 70);
	sm1.Display();

	cout << "\n\n\t Size of Employee      " << sizeof(cEmployee);
	cout << "\n\n\t Size of Manager       " << sizeof(cManager);
	cout << "\n\n\t Size of Sales Person  " << sizeof(cSalesPerson);
	cout << "\n\n\t Size of Sales Manager  " << sizeof(cSalesManager);
	
	cout << "\n\n\n";
}