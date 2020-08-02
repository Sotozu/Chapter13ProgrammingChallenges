#include <iostream>
#include "Employee.h"

//Constructors
Employee::Employee() {
	name = "";
	idNumber = 0;
	department = "";
	position = "";
}

Employee::Employee(std::string n, int id, std::string dep, std::string pos) {
	name = n;
	idNumber = id;
	department = dep;
	position = pos;

}
Employee::Employee(std::string n, int id) {
	name = n;
	idNumber = id;
	department = "";
	position = "";
}
 //Mutators
void Employee::setName(std::string n) {
	name = n;
}

void Employee::setID(int id) {
	idNumber = id;
}

void Employee::setDepartment(std::string dep) {
	department = dep;
}

void Employee::setPosition(std::string pos) {
	position = pos;
}

//Accessors
std::string Employee::getName() const {
	return name;
}
int Employee::getID() const {
	return idNumber;
}
std::string Employee::getDepartment() const {
	return department;
}
std::string Employee::getPosition() const {
	return position;
}