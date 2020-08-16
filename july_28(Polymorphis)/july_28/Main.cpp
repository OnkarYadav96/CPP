#include"Rect.h"
#include"Squre.h"

void main()
{
	cRect r;
	cSqure aq;

	cShape *s;

	s = &r;
	s->CalArea();

	s = &aq;
	s->CalArea();


}