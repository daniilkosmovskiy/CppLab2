#pragma once
#include "SimpleObject.h"
#include "Container.h"

class Method : public SimpleObject
{
public:
	Method(string* name, Container* owner);
	Method(string* name, Container* owner, Method* overrid);
	virtual ~Method();
	Container* Owner;
	Method* Overrided;
	bool isAbstract;
};
