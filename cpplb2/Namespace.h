#pragma once
#include <iostream>
#include <vector>
#include "SimpleObject.h"
#include "Container.h"
using namespace std;

class Namespace: Container
{
public:
	Namespace(string* name);
	virtual ~Namespace();
};

