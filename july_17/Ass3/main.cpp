#include"Account.h"

int main()
{
	cAccount a1("Onkar", 2000);
	cAccount a2("Abhijit", 1000);

	a1.display();
	cout << "\n\n";
	a2.display();
	cout << "\n\n";

	//updating the name.
	a1.setName("Kunal");
	a1.setBal(1800);
	a1.display();
	cout << "\n\n";

	//geting the acc_no
	cout << "\n\tAccount No. of a1:" << a1.getAcc_No();
	cout << "\n\tAccount No.of a2 :" << a2.getAcc_No();
	cout << "\n\tName of a2       :" << a2.getName();
	cout << "\n\tbalance of a1    :" << a1.getBal();
	cout << "\n\tbalance of a2    :" << a2.getBal();

	cout << "\n\n\n";
}