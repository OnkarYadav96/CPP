#include"cString.h"

cString::cString()
{
	len = 1;
	str = new char[1];
	str[0] = '\0';
}

cString::cString(char *s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
}

cString::cString(cString &obj)
{
	len = obj.len;
	str = new char[len + 1];
	strcpy(str,obj.str);
}

 cString cString::operator = (cString &obj)
{
	len = obj.len;
	str = new char[len + 1];
	strcpy(str, obj.str);
	return *this;
}

 void cString::Display()
 {
	 cout << "\n\n\t String:" << str;
 }

 cString::~cString()
 {
	 delete []  str;
 }

 ostream& operator<<(ostream &out, cString &obj)
 {
	 out << obj.str;
	 return out;
 }

 istream & operator >>(istream &in, cString &obj)
 {
	 char temp[20];
	 in >> temp;
	 obj.len = strlen(temp);
	 obj.str = new char[obj.len + 1];
	 strcpy(obj.str, temp);
	 return in;
 }