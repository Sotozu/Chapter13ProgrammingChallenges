#pragma once
class Circle
{
private:
	double radius;
	const double pi = 3.1459;

public:
	//Constructor
	Circle();
	Circle(double);

	//Accessor
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;

	//Mutators
	void setRadius(double);



};

