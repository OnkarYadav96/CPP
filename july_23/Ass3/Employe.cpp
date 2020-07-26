#include"Employ.h"
int cEmployee::cnt = 0;
cEmployee::cEmployee()
{
	cnt++;
	id = cnt;
	salary = 0;
}

void cEmployee::Accept_Emp()
{
	cout << "\nEnter Person Details : **\n\n";
	s.accept();
	cout << "Enter Salary : ";
	cin >> salary;
	d.Accept();
}

void cEmployee::Show_Emp()
{
	cout << "*********** Employee Details ************";
	
	s.Display();
	cout << "\nID : " << id;
	cout << "\nSalary : " << salary << endl;
	d.Display();

}