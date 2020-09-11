#include "stdafx.h"
#include "emoployee.h"
#include "string"
#include"iostream"
using namespace std;


void emoployee::get_name()
{
	cout << "Enter emoployee's name: ";
	cin >> name;
	cout << "Enter emoployee's ID: ";
	cin >> emp_num;
}


void emoployee::get_income()
{
	cout << "Enter emoployee's hourly pay: ";
	cin >> hourly_pay;
	cout << "Enter how many hour does the emoployee work: ";
	cin >> hours;
	cout << "Enter how many days does the emoployee work: ";
	cin >> work_day;
}

void emoployee::display()
{
	int money;
	money = hourly_pay * hours*work_day;
	cout << "=================================================================" << endl;
	cout << "EMOPLOYEE INFO:" << endl;
	cout << "Emoployee's name: " << name << endl;
	cout << "Emoployee's ID: " << emp_num << endl;
	cout << "Emoployee hourly pay rate: " << hourly_pay << endl;
	cout << "Your salary per month is: " << money <<" dollars" << endl;
	cout << "=================================================================" << endl;
}