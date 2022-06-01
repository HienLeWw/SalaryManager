#pragma once
#include <bits/stdc++.h>
using namespace std;

class Employee
{
protected:
	string id;
	string name;
	int age;
	int phoneNum;
	string email;
	int basicSalary;
	int salary;
public:
	Employee(string id = "", string name = "", int age = 0, int phoneNum = 0, string email = "", int basicSalary = 0,int salary = 0);
	string getName();
	int getSalary();
	virtual void setSalary() = 0;
	virtual void input();
	virtual void output();

};

