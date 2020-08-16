#include"Rect.h"

cRect::cRect()
{

}

cRect::cRect(int s)
{
	side = s;
}

void cRect::CalArea()
{
	cout << "Enter the side of Rectangle: ";
	cin >> side;
	int area;
	area = 4 * side;
	cout << "Area of Rectanglr is : " << area << endl;
}

void cRect::CalPeri()
{
	cout << "Enter rectangle side: ";
		cin >> side;
		int tarea;
		tarea = side + side + side + side;
		cout << "Perimeter of Square is : " << tarea << endl;
}