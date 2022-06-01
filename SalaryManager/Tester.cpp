#include "Tester.h"


Tester::Tester(string id, string name, int age, int phoneNum, string email, int basicSalary, int salary, int nBug) : Employee(id, name, age, phoneNum, email, basicSalary, salary) {
	this->nBug = nBug;
}

void Tester::setSalary() {
	salary = basicSalary + nBug * 50000;
}
void Tester::input() {
	Employee::input();
	cout << "Input number of bug have detected: ";
	cin >> nBug;
	cin.ignore();
}
void Tester::output() {
	Employee::output();
	cout << "Number of Bug have detected: " << nBug << "\t";
	cout << "Salary: " << salary << "\n";
}