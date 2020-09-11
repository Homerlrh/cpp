// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double cardbalance = 50.0;
	int count = 0;

	cout << "this program is to calculate the balance in your bank.\n";
	cout << "if your balance is grater or equal to 50, the bank will offer you 2% per month \n";
	do
	{
		cardbalance = cardbalance + cardbalance * 0.2;
		count++;

	} while (cardbalance<100);
	cout << "your balance is : \n";
	cout << cardbalance << " after " << count << " months\n";

}