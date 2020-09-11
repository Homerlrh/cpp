#pragma once
#ifndef emoployee_H
#define emoployee_H
#include "string"
using namespace std;
class emoployee
{
private://define privare term
	string name;
	int hourly_pay, hours, emp_num, work_day;
public://function ask question
	~emoployee() {}
	void get_name(string name, int emp_num);
	void get_income(int hourly_pay,int hours, int work_day);
	void display();
};
#endif