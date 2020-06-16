#include "stdafx.h"
#include "Farmer.h"


Farmer::Farmer(string name, string color) : Person("Farmer"+color)
{
	m_strName = name;
	cout << "Farmer()" << endl;
}


Farmer::~Farmer()
{
	cout << "~Farmer()" << endl;
}

void Farmer::sow()
{
	cout << "Farmer--sow()" + m_strName << endl;
}

void Farmer::test()
{
	cout << "Farmer--test()" << endl;
}