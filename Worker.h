#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Worker : virtual public Person
{
	string m_strCode;
public:
	Worker(string code = "001", string color = "blue");
	virtual ~Worker();
	void carry();
	virtual void test();
};