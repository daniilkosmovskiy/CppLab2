#include "stdafx.h"
#include "Container.h"
#include <algorithm>

Container::Container(string * name) : SimpleObject(name)
{
	this->Objects.reserve(10);
}

Container::~Container()
{

	for (unsigned int i = 0; i < Objects.size(); i++)
	{
		delete Objects[i];
	}
}

void Container::add_object(SimpleObject * object)
{
	this->Objects.push_back(object);
	
}

void Container::delete_object(SimpleObject * object)
{
	this->Objects.erase(std::remove(this->Objects.begin(), this->Objects.end(), object), this->Objects.end());
	delete object;
}
