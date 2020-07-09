#pragma once
#include <string>

const unsigned int FIELD_LENGTH = 40;
const char DEFAULT_NAME[] = "Unknown";
const char DEFAULT_COMPANY[] = "Obscure INC.";
const char DEFAULT_DEPARTMENT[] = "Software Eng.";
const double DEFAULT_SALARY = 2300.00;
const unsigned int DEFAULT_AGE = 20;

class Employee {
private:
	int id;
	double salary;

	static unsigned int _idFactory;
	static void incrementId() { _idFactory++; }
	static void decrementId() { _idFactory--; }

protected:
	char firstName[FIELD_LENGTH];
	char middleName[FIELD_LENGTH];
	char lastName[FIELD_LENGTH];
	char company[FIELD_LENGTH];
	unsigned short age;

public:
	char department[FIELD_LENGTH];

	//CONSTRUCTORS
	Employee();
	Employee(const char*, const char*, const char*, const char*, const char*, int, double);
	Employee(Employee&);

	//DESTRUCTOR
	~Employee();

	//METHODS
	void Input();
	void Output();
};