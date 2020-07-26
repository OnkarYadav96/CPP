#define _CRT_SECURE_NO_WAENINGS
#include<iostream>
using namespace std;

class Const_and_Ref
{
	const int con;  //declaring constant member.
	int n;
	int& ref;   // declaring reference member.
public:
	Const_and_Ref(int, int&, int);
	void display();
	int ret_n();
};