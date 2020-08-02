#include "RetailItem.h"

//Constructors
RetailItem::RetailItem() {
	description = "";
	units = 0;
	price = 0;

}

RetailItem::RetailItem(std::string d, int u, double p) {
	description = d;
	units = u;
	price = p;
}

//Accessors
std::string RetailItem::getDescription() {
	return description;
}
int RetailItem::getUnits() {
	return units;
}
double RetailItem::getPrice() {
	return price;
}

//Mutators
void RetailItem::setDescription(std::string d) {
	description = d;
}
void RetailItem::setUnits(int u) {
	units = u;
}
void RetailItem::setPrice(double p) {
	price = p;
}