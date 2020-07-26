#include"demo.h"

int main()
{
	int h = 100;
	Const_and_Ref cr(90, h, 10);  //creating object of Const_and_Ref class.
	cr.display();   // invoking display function to show values.
	cout << endl << "\n";
	return 0;   //end of the program.
}