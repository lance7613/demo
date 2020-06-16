#include "stdafx.h"
#include "Worker.h"
using namespace std;

Worker::Worker(string code, string color): Person("Worker"+color)
{
	m_strCode = code;
	cout << "Worker()" << endl;
}


Worker::~Worker()
{
	cout << "~Worker()" << endl;
}

void Worker::carry() {
	cout << "Worker--carry()" + m_strCode << endl;
}

void Worker::test()
{
	cout << "Worker--test()" << endl;
}