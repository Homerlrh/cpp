// ConsoleApplication31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int sortbubble(int a[], int size)
{
	int t;
	for (int i = 0; i < size-1; i++)
	{
		for (int k = size - 1; k > 1; k++)
		{
			if (a[k] > a[k - 1])
			{
				t = a[k];
				a[k] = a[k - 1];
				a[k - 1] = t;
			}
		}
	}
}

int main()
{
    return 0;
}

