#include"Box.h"

void main()
{
	cBox b1(3);
	b1.Display();

	cBox b2(2);
	b2.Display();

	if (b1 > b2)
		cout << "\n\t Box 1 is bigger !!" << endl;
	else
		cout << "\n\t Box 2 is bigger !!" << endl;

}