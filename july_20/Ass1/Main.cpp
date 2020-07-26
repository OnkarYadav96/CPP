#include"ComplexOprator.h"

int main()
{
	cComplex c1(2, 3);
	cComplex c2(4, 5);
	cComplex c3,c4,c5,c6;

	cout << "******Addition operator*****"<<endl;
	c3 = c1 + c2;
	c3.Display();
	cout << "\n\n\n" << endl;

	cout << "*****Substraction operator*******" << endl;
	c4 = c1 - c2;
	c4.Display();
	cout << "\n\n\n" << endl;

	cout << "*****Pre-increment operator*******" << endl;
	c5 = ++c1;
	c5.Display();
	cout << "\n\n\n" << endl;

	cout << "*****Post-increment operator*******" << endl;
	c6 = c2--;
	c6.Display();
	cout << "\n\n\n" << endl;
}