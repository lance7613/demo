#pragma once
#include "Farmer.h"
#include "Worker.h"
class Migrant : virtual public Farmer, virtual public Worker
{
public:
	Migrant(string name, string code, string color);
	virtual ~Migrant();
	virtual void test();
};