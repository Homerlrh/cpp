#include "stdafx.h"
#include "relationship.h"
#include <iostream>
using namespace std;


Engine::Engine(int num)
{
	cylinder = num;
}

void Engine::start()
{
	cout << getCylinder() << " cylinder car had started" << endl;
}

int Engine::getCylinder()
{
	return cylinder;
}

