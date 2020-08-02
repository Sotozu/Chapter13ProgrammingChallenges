#include "Payroll11.h"

//Constructor
Payroll11::Payroll11(int h, float r) {
	total_hours = h;
	rate = r;
}
Payroll11::Payroll11() {
	total_hours = 0;
	rate = 0;
}
//Accessor
float Payroll11::grossPay() const {
	return total_hours * rate;
}

int Payroll11::showHours() const {
	return total_hours;
}

float Payroll11::showRate() const {
	return rate;
}

//Mutator

void Payroll11::setHoursNRate(int h, float r) {
	total_hours = h;
	rate = r;
}

