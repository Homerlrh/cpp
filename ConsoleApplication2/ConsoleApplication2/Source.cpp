// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int numberofcandies;
	double barweight, totalweight;
	char candyname[10];
	cout << "Press Enter to continute \n";
	cout << "Enter your favourite candy name: \n";
	cin >> "candyname";
	cout >> "Enter the weight of " << candyname << endl;
	cin >> barweight;
	cout << "Enter number of candies: \n";
	cin >> "numberofcandies";
	totalweight = numberofcandies * barweight;
	cout << "The total weight of candies is : " << totalweight << "grams" << endl;

	return 0;
}