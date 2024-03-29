// ex.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Base
{
protected://nobody  can access the valvue in protect besides the creator
	int m_value;
public:
	Base(int value): m_value(value)
	{
	}

	const char* getName() { return "Base"; }
	int getValue() { return m_value; }
};

class Derived :public Base
{
public:
	Derived(int value): Base(value)
	{
	}

	const char* getName() { return "Derived"; }
	int getValueDoubled() { return m_value * 2; }
};

int main()
{
	Derived derived(5);
	// These are both legal!
	Base &rBase = derived;
	Base *pBase = &derived;
	cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';
	cout << "rBase is a " << rBase.getName() << " and has value " << rBase.getValue() << '\n';
	cout << "pBase is a " << pBase->getName() << " and has value " << pBase->getValue() << '\n';
	system("pause");
	return 0;
}