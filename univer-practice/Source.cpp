#include <iostream>
#include "employee.h"
using namespace std;

const int ARR_SIZE = 3;

int main() {
	Employee personEmpty;
	Employee personFilled("Mark", "Fedyasov",
		"Sergeevich", "PSU", "student", 19, 100.0);
	Employee personCopy(personFilled);
	Employee personArray[ARR_SIZE];

	for (int i = 0; i < ARR_SIZE; i++) {
		personArray[i].Input();
	}

	for (int i = 0; i < ARR_SIZE; i++) {
		personArray[i].Output();
	}

	return 0;
}