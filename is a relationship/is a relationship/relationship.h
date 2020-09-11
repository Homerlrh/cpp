#pragma once
#include <iostream>
using namespace std;

class school
{
	public:
		string name;
		int num;
};

class student :public school 
{
	public:
		string citizenship;
};