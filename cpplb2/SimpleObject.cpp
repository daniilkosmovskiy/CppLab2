#include "stdafx.h"
#include "SimpleObject.h"

SimpleObject::SimpleObject(string * name)
{
	this->Name = name;
}

SimpleObject::~SimpleObject()
{
	delete this->Name;

}
