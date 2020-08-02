#pragma once
#include "InventoryItem.h"
class CashRegister
{
private:

	float profit_margin;
	float sales_tax;

public:
	//Constructor
	CashRegister();
	CashRegister(float, float);
	//Mutator
	void setPMargin(float);
	void setSTax(float);
	//Accessor

	//Member Function
	double calcSubtotal(double, int);
	double calcTax(double, int);
	double calcTotal(double, int);
};

