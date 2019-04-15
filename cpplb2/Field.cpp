#include "stdafx.h"
#include "Field.h"

template<typename T>
Field<T>::Field(string * name, Container * owner) : SimpleObject(name)
{
	this->value = T;
	this->Owner = owner;
}

template<typename T>
Field<T>::~Field()
{
}
