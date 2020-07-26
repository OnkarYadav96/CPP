#include"student.h"

int main()
{
	cStudent s1(1, "swapnil", 63);
	s1.displayStudent();
	s1.show_result();

	cout << "\n\n\n";

	cStudent s2;
	s2.acceptStudent();
	s2.displayStudent();
	s2.show_result();

	cout << "\n\n\n";
}