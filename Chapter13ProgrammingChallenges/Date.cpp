#include <iostream>

#include "Date.h"

#include <string>

using namespace std;

Date::Date() { // default constructor
	day = 0;
	month = 0;
	year = 0;
}

Date::Date(int d, int m, int y) { //constructor
	day = d;
	month = m;
	year = y;
}

void Date::setDate( int d, int m, int y) {

	day = d;
	month = m;
	year = y;

}

void Date::dateForm1() {
	cout << day << "/" << month << "/" << year << endl;
}

void Date::dateForm2() {

	string m;
	switch (month) {
	case 1:
		m = "January";
		break;
	case 2:
		m = "February";
		break;
	case 3:
		m = "March";
		break;
	case 4:
		m = "April";
		break;
	case 5:
		m = "May";
		break;
	case 6:
		m = "June";
		break;
	case 7:
		m = "July";
		break;
	case 8:
		m = "August";
		break;
	case 9:
		m = "September";
		break;
	case 10:
		m = "October";
		break;
	case 11:
		m = "November";
		break;
	case 12:
		m = "December";
		break;
	default:
		cout << "ERROR.\n";
		break;
	}

	cout << m << " " << day << ", " << year << endl;
}

void Date::dateForm3() {
	string m;
	switch (month) {
	case 1:
		m = "January";
		break;
	case 2:
		m = "February";
		break;
	case 3:
		m = "March";
		break;
	case 4:
		m = "April";
		break;
	case 5:
		m = "May";
		break;
	case 6:
		m = "June";
		break;
	case 7:
		m = "July";
		break;
	case 8:
		m = "August";
		break;
	case 9:
		m = "September";
		break;
	case 10:
		m = "October";
		break;
	case 11:
		m = "November";
		break;
	case 12:
		m = "December";
		break;
	default:
		cout << "ERROR.\n";
		break;
	}

	cout << day << " " << m << " " << year << endl;
}

bool Date::validDay(int d) {
	if (d > 31 || d < 1) {
		cout << "ERROR: Invalid day. (1-31)\n";
		cout << "Please try again.\n";
		return false;
	}
	else {
		return true;
	}
}

bool Date::validMonth(int m) {
	if (m > 12 || m < 1) {
		cout << "ERROR: Invalid month. (1-12)\n";
		cout << "Please try again.\n";
		return false;
	}
	else {
		return true;
	}
}
