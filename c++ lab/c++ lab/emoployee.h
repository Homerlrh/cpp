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
	emoployee() {}
	~emoployee() {}//destructor
	void get_name();
	void get_income();
	void display();
};
#endif