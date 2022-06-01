#include "Programmer.h"

Programmer::Programmer(string id,string name,int age,int phoneNum,string email,int basicSalary,int salary,int overtimeHours) : Employee(id,name,age,phoneNum,email,basicSalary,salary) {
	this->overtimeHours = overtimeHours;
}

void Programmer::setSalary() {
	salary = basicSalary + overtimeHours * 200000;
}
void Programmer::input() {
	Employee::input();
	cout << "Input overtime hours: ";
	cin >> overtimeHours;
	cin.ignore();
}
void Programmer::output() {
	Employee::output();
	cout << "Overtime Hours: " << overtimeHours << "\t";
	cout << "Salary: " << salary << "\n";
}