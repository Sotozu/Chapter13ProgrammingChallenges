#pragma once
#include <string>
class Car
{

private:

	int yearModel;
	std::string make;
	int speed;



public:
	//Constructor
	Car (int y, std::string m);
	//Accesor
	int getModel() const;
	std::string getMake() const;
	int getSpeed() const;
	//Mutator
	void accelorate();
	void brake();
};

