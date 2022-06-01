#pragma once
#include "Employee.h"
class Programmer :
    public Employee
{
private:
    int overtimeHours;
public:
    Programmer(string id = "", string name = "", int age = 0, int phoneNum = 0, string email = "", int basicSalary = 0, int salary = 0,int overtimeHours = 0);
    void setSalary();
    void input();
    void output();
};
