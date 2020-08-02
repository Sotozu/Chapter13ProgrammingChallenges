#pragma once

class Date {
private:

	int day;
	int month;
	int year;

public:
	Date();
	Date(int, int, int);
	void setDate(int, int, int);
	void dateForm1();
	void dateForm2();
	void dateForm3();
	bool validDay(int);
	bool validMonth(int);

};