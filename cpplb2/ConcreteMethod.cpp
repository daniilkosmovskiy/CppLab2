#include "stdafx.h"
#include "ConcreteMethod.h"

template<typename T>
ConcreteMethod<T>::ConcreteMethod(string * name, Container * owner) : Method(name, owner)
{
}

template<typename T>
ConcreteMethod<T>::~ConcreteMethod()
{
}



