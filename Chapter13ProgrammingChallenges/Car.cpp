#include <iostream>
#include "Car.h"
#include <string>

//Constructor
Car::Car (int y, std::string m) {
	yearModel = y;
	make = m;
	speed = 0;
}

//Accessor
int Car::getModel() const {
	return yearModel;
}
std::string Car::getMake() const {
	return make;
}
int Car::getSpeed() const {
	return speed;
}

// Mutators
void Car::accelorate() {
	speed += 5;
}
void Car::brake() {
	if (speed - 5 < 0) {
		std::cout << "ERROR:";
		exit(EXIT_FAILURE);
	}
	speed -= 5;
}


