#include "stdafx.h"
#include "emoployee.h"
#include "string"
#include"iostream"
using namespace std;


void emoployee::get_name(string name, int emp_num)
{
	cout << "Enter emoployee's name: ";
	cin >> name;
	cout << "Enter emoployee's ID: ";
	cin >> emp_num;
}


void emoployee::get_income(int hourly_pay, int hours, int work_day)
{
	int money;
	cout << "Enter emoployee's hourly pay: ";
	cin >> hourly_pay;
	cout << "Enter how many hour does the emoployee work: ";
	cin >> hours;
	cout << "Enter how many days does the emoployee work: ";
	cin >> work_day;
	money = hourly_pay * hours*work_day;
	cout << "After a month, you cna get: " << money << " salary" << endl;
}

void emoployee::display()
{
	cout << "EMOPLOYEE INFO:" << endl;
	cout << "Emoployee's name: " << name << endl;
	cout << "Emoployee's ID: " << emp_num << endl;
	cout << "Emoployee hourly pay rate: " << hourly_pay << endl;
}