#pragma once
#include <iostream>
#include <string>
using namespace std;

class Education
{
public:
	virtual void add() {};
	virtual void remove(){};
	virtual void Delete() {};
};

class school :public Education
{
public:
	void add(string name) 
	{
		cout << name << " is added into the school system" << endl;
	}
	void remove(string name)
	{
		cout << name << " is removed from the school system" << endl;
	}
	void Delete(string name)
	{
		cout << name << " is deleted from the school system" << endl;
	}
};
