#pragma once
#include <iostream>
#include <string>
#include "Container.h"

template <typename T>
class ConcreteMethod : public SimpleObject
{
public:
	ConcreteMethod(string* name, Container* owner);
	virtual ~ConcreteMethod();
};
