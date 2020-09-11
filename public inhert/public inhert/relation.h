#pragma once
#include <iostream>
#include <string>
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