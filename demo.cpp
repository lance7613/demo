// demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	Migrant *p = new Migrant("Rose", "200", "green");
	

	p->sow();
	p->carry();

//	p->Farmer::printColor();
//	p->Worker::printColor();
	p->printColor();
	cout << p->Farmer::m_strColor << endl;
	cout << p->Worker::m_strColor << endl;
	cout << p->Person::m_strColor << endl;
	cout << p->m_strColor << endl;


	cout << sizeof(*p) << endl;

	
	p->Farmer::test();
	p->Worker::test();
	p->Person::test();
	p->test();



	delete p;
	p = NULL;
    return 0;
}

