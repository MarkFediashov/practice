#include "employee.h"
#include <iostream>
#include <iomanip>

using namespace std;

unsigned int Employee::_idFactory = 0;

void Employee::Input() {
	cout << "Name: ";
	cin.getline(firstName, 40);


	cout << "Middle name: ";
	cin.getline(middleName, 40);


	cout << "Last name: ";
	cin.getline(lastName, 40);


	cout << "Company: ";
	cin.getline(company, 40);


	cout << "Department: ";
	cin.getline(department, 40);


	cout << "Age: ";
	cin >> age;
	cin.get();

	cout << "Salary: ";
	cin >> salary;
	cin.get();
}

void Employee::Output() {
	cout << "==================================================\n";
	cout << "||\t\t\t\t\t\t||\n";
	cout << "||\t\t    PERSON CARD\t\t\t||\n";
	cout << "||\t\t\t\t\t\t||\n";
	cout << "||\t   First name: " << setw(15);
	cout << firstName << "\t\t||" << endl;
	cout << "||\t   Middle name: " << setw(14);
	cout << middleName << "\t\t||" << endl;
	cout << "||\t   Last name: " << setw(16);
	cout << lastName << "\t\t||" << endl;
	cout << "||\t   Age: " << setw(22);
	cout << age << "\t\t||" << endl;

	cout << "||\t   Company: " << setw(18);
	cout << company << "\t\t||" << endl;
	cout << "||\t   Department: " << setw(15);
	cout << department << "\t\t||" << endl;
	cout << "||\t   Salary: " << setw(18);
	cout << salary << "$\t\t||" << endl;
	cout << "||\t   ID: " << setw(23);
	cout << id << "\t\t||" << endl;
	cout << "||\t\t\t\t\t\t||\n";
	cout << "==================================================\n";
}

Employee::Employee() {
	id = _idFactory;

	age = DEFAULT_AGE;
	salary = DEFAULT_SALARY;
	strcpy_s(firstName, DEFAULT_NAME);
	strcpy_s(lastName, DEFAULT_NAME);
	strcpy_s(middleName, DEFAULT_NAME);
	strcpy_s(company, DEFAULT_COMPANY);
	strcpy_s(department, DEFAULT_DEPARTMENT);

	Employee::incrementId();
}

Employee::Employee(const char* firstName, const char* middleName, const char* lastName, const char* company, const char* department, int age, double salary) {
	id = _idFactory;

	this->age = age;
	this->salary = salary;
	strcpy_s(this->company, company);
	strcpy_s(this->firstName, firstName);
	strcpy_s(this->lastName, lastName);
	strcpy_s(this->middleName, middleName);
	strcpy_s(this->department, department);

	Employee::incrementId();
}

Employee::Employee(Employee& p) {
	id = p.id;

	this->age = p.age;
	this->salary = p.salary;
	strcpy_s(this->company, p.company);
	strcpy_s(this->firstName, p.firstName);
	strcpy_s(this->lastName, p.lastName);
	strcpy_s(this->middleName, p.middleName);
	strcpy_s(this->department, p.department);

}

Employee::~Employee() {
	id = -1;
	age = -1;
	salary = -1.0;

	memset(firstName, 0, sizeof(firstName));
	memset(firstName, 0, sizeof(middleName));
	memset(firstName, 0, sizeof(lastName));
	memset(firstName, 0, sizeof(department));
	memset(firstName, 0, sizeof(company));

	decrementId();
}