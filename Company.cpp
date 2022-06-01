#include "Company.h"

void Company::input() {
	cout << "\n--- Input Employees Info ---\n";
	Employee* employee;
	int n;
	cout << "Input number of employee: ";
	cin >> n;
	//cin.ignore();
	bool choice;
	for (int i = 0; i < n; ++i) {
		cout << "Input Programmer(0), Tester(1) ? : ";
		cin >> choice;
		if (choice)
			employee = new Tester;
		else
			employee = new Programmer;
		employee->input();
		employee->setSalary();
		employeeList.push_back(employee);
	}
}
void Company::output() {
	cout << "\n*** Employee Info ***\n";
	for (int i = 0; i < employeeList.size(); ++i) {
		employeeList[i]->output();
	}
}
void Company::setAvgSalary() {
	int Sum(0);
	int n = employeeList.size();
	for (int i = 0; i < n; ++i) {
		Sum += employeeList[i]->getSalary();
	}
	avgSalary = (1.0 * Sum) / (n);
}
float Company::getAvgSalary() {
	return avgSalary;
}
void Company::belowAvgSalary() {
	setAvgSalary();
	cout << "List of Employees whose salary is below average:\n";
	for (int i = 0; i < employeeList.size(); ++i) {
		if (employeeList[i]->getSalary() < avgSalary)
			cout << employeeList[i]->getName() <<"\n";
	}
}
