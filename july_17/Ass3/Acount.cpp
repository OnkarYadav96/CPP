#include"Account.h"
int cAccount::cnt;
cAccount::cAccount()
{
	acc_no = 0;
	strcpy(name, "null");
	bal = 0;
}
cAccount::cAccount(const char* n, float b)
{
	acc_no = ++cnt;
	strcpy(name, n);
	bal = b;
}
void cAccount::setName(const char* n)
{
	strcpy(name, n);
}
void cAccount::setBal(float b)
{
	bal = b;
}
char* cAccount::getName()
{
	return name;
}
int cAccount::getAcc_No()
{
	return acc_no;
}
float cAccount::getBal()
{
	return bal;
}
void cAccount::display()
{
	cout << "\n\tAccount Number  :" << acc_no;
	cout << "\n\tAcc. Holder Name:" << name;
	cout << "\n\tAccount Balance :" << bal;
}