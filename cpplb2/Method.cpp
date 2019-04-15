#include "stdafx.h"
#include "Method.h"

Method::Method(string * name, Container * owner) : SimpleObject(name)
{
	this->Owner = owner;
}

Method::Method(string * name, Container * owner, Method * overrid) : Method(name, owner)
{
	this->Overrided = overrid;
}

Method::~Method()
{
}
