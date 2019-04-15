#pragma once
#include "SimpleObject.h"
#include <iostream>
#include <vector>

using std::vector;

class Container : public SimpleObject
{
public:
	Container(string* name);
	virtual ~Container();
	vector<SimpleObject*> Objects;
	void add_object(SimpleObject* object);
	void delete_object(SimpleObject* object);
};

