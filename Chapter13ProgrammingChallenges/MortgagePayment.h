#pragma once
#include <cmath>
class MortgagePayment
{
private:
	double loan_amount;
	double interest_rate;
	int years;
	double term;
	double monthly_payment;

	void calc_Term_MonthlyPayment() {
		term = pow((1 + (interest_rate / 12)), (12 * years));
		monthly_payment = (loan_amount * (interest_rate / 12) * term) / (term - 1);
	}

public:
	//Constructor

	MortgagePayment();
	MortgagePayment(double, double, int);

	//Mutator

	void setLoan(double);
	void setRate(double);
	void setYear(int);

	//Accessor

	double totalPayment();
	double monthlyPayment();
};

