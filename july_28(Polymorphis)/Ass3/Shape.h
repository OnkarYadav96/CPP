#pragma once
#include<iostream>
using namespace std;

#ifndef SHP_
#define SHP_

class cShape
{
public:
	virtual void CalArea()=0;
	virtual void CalPeri()=0;
};
#endif