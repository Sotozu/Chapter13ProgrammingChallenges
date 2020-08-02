#include "Inventory.h"
#include <iostream>

//Constructors
Inventory::Inventory() {
	itemNumber = 0;
	quantity = 0;
	cost = 0;
	total_cost = 0;
}

Inventory::Inventory(int n, int q, double c) {
	itemNumber = n;
	quantity = q;
	cost = c;
	Inventory::setTotalCost(q, c);
}

//Accessors
int Inventory::getItemNumber() const {
	return itemNumber;
}
int Inventory::getQuantity() const {
	return quantity;
}
double Inventory::getCost() const {
	return cost;
}
double Inventory::getTotalCost() const {
	return total_cost;
}


//Mutators
void Inventory::setItemNumber(int n) {
	itemNumber = n;
}
void Inventory::setQuantity(int q) {
	quantity = q;
}
void Inventory::setCost(double c) {
	cost = c;
}
void Inventory::setTotalCost(int q, double c) {
	total_cost = q * c;
}

//Other

bool Inventory::validData(int x) {
	if (x < 0) {
		std::cout << "ERROR: Please enter a positive number\n";
		return false;
	}
	else {
		return true;
	}
}
bool Inventory::validData(double x) {
	if (x < 0) {
		std::cout << "ERROR: Please enter a positive number\n";
		return false;
	}
	else {
		return true;
	}
}