#pragma once
#include "Person.h"
#include <iostream>
using namespace std;

class Farmer : virtual public Person
{
	string m_strName;
public:
	Farmer(string name = "Jack", string color = "yellow");
	virtual ~F