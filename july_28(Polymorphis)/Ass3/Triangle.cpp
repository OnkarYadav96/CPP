#include"Triangle.h"

cTriangle::cTriangle()
{

}

cTriangle::cTriangle(int b, int h,int r)
{
	height=h;
	base = b;
	re = r;
}

void cTriangle::CalArea()
{
	float area;
	cout << "Enter the Base and Height of trianglr : ";
	cin >> base >> height;
	area = 0.5*float(base*height);
	cout << "Area of Triangle is : " << area<<endl;
}

void cTriangle::CalPeri()
{
	cout << "Enter the 3 sides of Triangle: ";
	cin >> base >> height >> re;
	int per;
	per = base + height + re;
	cout << "Total perimeter of Triangle is: " << per << endl;
}

