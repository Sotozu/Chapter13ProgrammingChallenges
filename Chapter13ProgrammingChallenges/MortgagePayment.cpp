#include "MortgagePayment.h"

//Constructor

MortgagePayment::MortgagePayment() {
	loan_amount = 0;
	interest_rate = 0;
	years = 0;
	calc_Term_MonthlyPayment();
}
MortgagePayment::MortgagePayment(double l, double r, int y) {
	loan_amount = l;
	interest_rate = r;
	years = y;
	calc_Term_MonthlyPayment();

}

//Mutator

void MortgagePayment::setLoan(double l) {
	loan_amount = l;
	calc_Term_MonthlyPayment();

}
void MortgagePayment::setRate(double r) {
	interest_rate = r;
	calc_Term_MonthlyPayment();


}
void MortgagePayment::setYear(int y) {
	years = y;
	calc_Term_MonthlyPayment();

}

//Accessor

double MortgagePayment::totalPayment() {
	return monthly_payment * 12 * years;
}
double MortgagePayment::monthlyPayment() {
	return monthly_payment;
}