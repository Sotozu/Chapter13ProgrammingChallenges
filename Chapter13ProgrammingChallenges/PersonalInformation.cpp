#include "PersonalInformation.h"
#include <string>

//Constructors
PersonalInformation::PersonalInformation() {
	name = "";
	address = "";
	age = 0;
	phone = "";
}

PersonalInformation::PersonalInformation(std::string n, std::string add, int a, std::string p) {
	name = n;
	address = add;
	age = a;
	phone = p;
}

//Accessor
std::string PersonalInformation::getName() const {
	return name;
}
std::string PersonalInformation::getAddress() const {
	return address;
}
int PersonalInformation::getAge() const {
	return age;
}
std::string PersonalInformation::getPhone() const {
	return phone;
}

//Mutators
void PersonalInformation::setName(std::string n) {
	name = n;
}
void PersonalInformation::setAddress(std::string add) {
	address = add;
}
void PersonalInformation::setAge(int a) {
	age = a;
}
void PersonalInformation::setPhone(std::string p) {
	phone = p;
}