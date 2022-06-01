#pragma once
#include "Programmer.h"
#include "Tester.h"

class Company
{
private:
	vector<Employee*> employeeList;
	float avgSalary;
public:
	void input();
	void output();
	void setAvgSalary();
	float getAvgSalary();
	void belowAvgSalary();
};

