#ifndef PERSON_H
#define PERSON_H
#pragma once
#include <string>
using namespace std;

class Person
{
	
public:
	Person(string color = "black");
	virtual ~Person();
	void printColor();
	string m_strColor;
	virtual void test();
};

#endif