#pragma once
#include <string>

class RetailItem
{
private:
	std::string description;
	int units;
	double price;

public:
	//Constructors
	RetailItem();
	RetailItem(std::string, int, double);

	//Accessors
	std::string getDescription();
	int getUnits();
	double getPrice();

	//Mutators
	void setDescription(std::string);
	void setUnits(int);
	void setPrice(double);

};

