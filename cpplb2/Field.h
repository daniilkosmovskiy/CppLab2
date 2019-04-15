#pragma once
#include "Container.h"
#include "SimpleObject.h"

template <typename T>
class Field : public SimpleObject
{
public:
	Container * Owner;
	T value;
	Field<T>(string* name, Container* owner);
	virtual ~Field();
};

