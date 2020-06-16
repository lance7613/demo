#include "stdafx.h"
#include "Migrant.h"


Migrant::Migrant(string name, string code, string color) : Farmer(name, color), Worker(code, color)
{
	cout << "Migrant()" << endl;
}


Migrant::~Migrant()
{
	cout << "~Migrant()" << endl;
}

void Migrant::test()
{
	cout << "Migrant--test()" << endl;
}