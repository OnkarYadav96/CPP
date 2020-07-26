#include"ComplexOprator.h"

cComplex::cComplex()
{
	real = 0;
	imag = 0;
}

cComplex::cComplex(int r, int i)
{
	real = r;
	imag = i;
}

cComplex cComplex::operator + (cComplex &obj)
{
	cComplex temp;
	temp.real = this->real + obj.real;
	temp.imag = this->imag + obj.imag;
	return temp;
}

cComplex cComplex::operator - (cComplex &obj)
{
	cComplex temp;
	temp.real = this->real - obj.real;
	temp.imag = this->imag - obj.imag;
	return temp;
}

cComplex cComplex::operator ++()
{
	cComplex temp;
	temp.real=this->real++;
	temp.imag=this->imag++;
	return temp;
}

cComplex cComplex::operator --(int)
{
	cComplex temp;
	temp.real = this->real--;
	temp.imag = this->imag--;
	return temp;
}

void cComplex::Display()
{
	if (imag < 0)
		cout << "\n\n\t Complex " << real << imag << "i";
	else
		cout << "\n\n\t Complex " << real << "+" << imag << "i";

}