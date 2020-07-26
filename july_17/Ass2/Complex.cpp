#include"complex.h"
int cComplex::cnt;
cComplex::cComplex()
{
	real = 0;
	img = 0;
	cnt++;
}
cComplex::cComplex(int r, int i)
{
	real = r;
	img = i;
	cnt++;
}
void cComplex::setReal(int r)
{
	real = r;
}
void cComplex::setImg(int i)
{
	img = i;
}
int cComplex::getReal()
{
	return real;
}
int cComplex::getImg()
{
	return img;
}
void cComplex::display()
{
	cout << "\n\tcomplex No.:" << real << "+" << img << "i";
}
int cComplex::obj_count()
{
	return cnt;
}