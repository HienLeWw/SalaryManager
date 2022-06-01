#pragma once
#include "Employee.h"
class Tester :
    public Employee
{
private:
    int nBug;
public:
    Tester(string id = "", string name = "", int age = 0, int phoneNum = 0, string email = "", int basicSalary = 0, int salary = 0, int nBug = 0);
    void setSalary();
    void input();
    void output();
};

