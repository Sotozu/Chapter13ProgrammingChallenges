#pragma once
class Inventory
{
private:
	int itemNumber;
	int quantity;
	double cost;
	double total_cost;

public:
	//Constructors
	Inventory();
	Inventory(int, int, double);

	//Accessors
	int getItemNumber() const;
	int getQuantity() const;
	double getCost() const;
	double getTotalCost() const;


	//Mutators
	void setItemNumber(int);
	void setQuantity(int);
	void setCost(double);
	void setTotalCost(int, double);

	//Other

	bool validData(int);
	bool validData(double);
};

