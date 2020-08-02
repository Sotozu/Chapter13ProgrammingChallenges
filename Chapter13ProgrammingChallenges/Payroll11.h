#pragma once
class Payroll11
{
private:
	int total_hours;
	float rate;

public:

	//Constructor
	Payroll11();
	Payroll11(int, float);
	//Accessor
	float grossPay() const;
	int showHours() const;
	float showRate() const;
	//Mutatros;
	void setHoursNRate(int, float);



};

