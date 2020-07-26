#include"Complex.h"

int main()
{
	cComplex c1(2, 3);
	cComplex c2;

	c2.setReal(5);
	c2.setImg(7);

	c1.display();
	c2.display();
	cout << "\n\n";

	cout << "\n\tNo of objects:" << cComplex::obj_count();
	cout << "\n\n\n";
}