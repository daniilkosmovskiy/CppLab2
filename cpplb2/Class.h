#pragma once
#include "Method.h"
#include "Namespace.h"
#include "Container.h"
#include <vector>

using namespace std;


class Class : public Container
{
public:
	Class(string* name);
	Class(string* name, Class* parent);
	Class(string* name, Class* parent, Container* owner);
	virtual ~Class();
	Container* Owner;
	vector<Method*> Methods;  // ???
	vector<Class*> Parents;
	bool isAbstract(); 
	void Check();	// проверяет на абстрактность методы 
	void add_method(Method* method);
	void delete_method(Method* method);
};