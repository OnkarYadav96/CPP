#include"Person.h"

int main()
{
	cPerson p1("Onkar", 23, "Baramati");
	p1.display();
	cout << "\n\n";

	//update the name.
	p1.setName("sunil");
	p1.display();
	cout << "\n\n";

	//get an only age.
	cout << "\n\tAge :" << p1.getAge();
	cout << "\n\n";

	//update the city.
	p1.setCity("delhi");

	//get the value of only city.
	cout << "\n\tCity:" << p1.getCity();
	cout << "\n\n";
	p1.display();
	cout << "\n\n\n";
}