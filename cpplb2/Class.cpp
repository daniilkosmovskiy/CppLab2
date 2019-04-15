#include "stdafx.h"
#include "Class.h"
#include <algorithm>

Class::Class(string* name) : Container(name)
{
	this->Parents.reserve(10);
}

Class::Class(string* name, Class* parent) : Class(name)
{
	this->Parents.push_back(parent);
	for (unsigned int i = 0; i < parent->Parents.size(); i++)
	{
		this->Parents.push_back(parent->Parents[i]);
		for (unsigned int j = 0; j < parent->Parents[i]->Objects.size; j++)
		{
			this->Objects.push_back(parent->Parents[i]->Objects[j]);
		}
	}
}

Class::Class(string* name, Class* parent, Container* owner) : Class(name, parent)
{
	this->Owner = owner;
}

virtual Class::~Class()
{
	for (unsigned int i = 0; i < Objects.size(); i++)
	{
		delete Objects[i];
	}
}

bool Class::isAbstract()
{
	for (unsigned int i = 0; i < this->Methods.size(); i++)
	{
		if (Methods[i]->isAbstract)
			return true;
	}
	return false;
}

void Class::Check()
{
	if (!isAbstract())
	{
		for (unsigned int i = 0; i < Methods.size(); i++)
		{
			if (!Methods[i]->isAbstract)
				throw new exception("all methods must be abstract in abstract class");
		}
	}
}

void Class::add_method(Method * method)
{
	this->Methods.push_back(method);
	this->add_object(method);
	this->Check();
}

void Class::delete_method(Method * method)
{
	this->Methods.erase(std::remove(this->Methods.begin(), this->Methods.end(), method), this->Methods.end());
	delete_object(method);
	this->Check();
}

