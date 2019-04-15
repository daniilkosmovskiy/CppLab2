#include "stdafx.h"
#include "Namespace.h"


Namespace::Namespace(string * name): Container(name)
{

}

Namespace::~Namespace()
{
	delete(this->Name);
	for (unsigned int i = 0; i < this->Objects.size(); i++)
	{
		delete Objects[i];
	}
}
