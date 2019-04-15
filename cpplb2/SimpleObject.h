#pragma once
#include <iostream>
using std::string;

class SimpleObject
{
public:
	SimpleObject(string* name);
	virtual ~SimpleObject();
	string* Name;
};


