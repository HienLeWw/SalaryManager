#include "Employee.h"

Employee::Employee(string id,string name,int age,int phoneNum,string email,int basicSalary,int salary) {
	this->id = id;
	this->name = name;
	this->age = age;
	this->phoneNum = phoneNum;
	this->email = email;
	this->basicSalary = basicSalary;
	this->salary = salary;
}
string Employee::getName() {
	return name;
}
int Employee::getSalary() {
	return salary;
}
void Employee::input() {
	cout << "Input id: ";
	cin >> id;
	cin.ignore();
	cout << "Input name: ";
	getline(cin, name);
	cout << "Input age: ";
	cin >> age;
	cout << "Input phone number: ";
	cin >> phoneNum;
	cin.ignore();
	cout << "Input email: ";
	cin >> email;
	cout << "Input basic salary: ";
	cin >> basicSalary;
}
void Employee::output() {
	cout << "ID: " << id << "\t";
	cout << "Name: " <<setw(20)<<left<< name << "\t";
	cout << "Age: " << age << "\t";
	cout << "Phone Number: " << phoneNum << "\t";
	cout << "Email: " << email << "\n";
	cout << "Basic Salary: " << basicSalary << "\t";
}