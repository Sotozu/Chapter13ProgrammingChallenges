#include "Circle.h"
#include <cmath>

//Constructor
Circle::Circle() {
	radius = 0;
}
Circle::Circle(double r) {
	radius = r;
}

//Accessor
double Circle::getRadius() const {
	return radius;
}
double Circle::getArea() const {
	return pi * std::pow(radius, 2);
}
double Circle::getDiameter() const {
	return radius * 2;
}
double Circle::getCircumference() const {
	return 2 * pi * radius;
}

//Mutators
void Circle::setRadius(double r) {
	radius = r;
}