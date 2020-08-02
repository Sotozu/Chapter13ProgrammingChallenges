#include "CashRegister.h"


//Constructor
CashRegister::CashRegister() {
	profit_margin = 0.30;
	sales_tax = 0.06;
}

CashRegister::CashRegister(float p, float s) {
	profit_margin = p;
	sales_tax = s;
}
//Mutator
void CashRegister::setPMargin(float p) {
	profit_margin = p;
}
void CashRegister::setSTax(float s) {
	sales_tax = s;
}
//Accessor


//Member Function
double CashRegister::calcSubtotal(double c, int u) {

	return (c * u) + (profit_margin * (c * u));
}

double CashRegister::calcTax(double c, int u) {
	return (c * u) * sales_tax;
}

double CashRegister::calcTotal(double c, int u) {
	return calcTax(c, u) + calcSubtotal(c, u);
}
