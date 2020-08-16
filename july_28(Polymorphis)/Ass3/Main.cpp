#include"Rect.h"
#include"Triangle.h"

void main()
{
	cShape *s;

	cRect r;
	cTriangle t;

	s = &r;
	s->CalArea();
	s->CalPeri();

	cout << "*********************" << endl;

	s = &t;
	s->CalArea();
	s->CalPeri();
}