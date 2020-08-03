#include <iostream>
#include <iomanip>
#include <string>
#include <memory>
#include <time.h>
#include <cstdlib>
//#include "Date.h"
//#include "Employee.h"
//#include "Car.h"
//#include "PersonalInformation.h"
//#include "RetailItem.h"
//#include "Inventory.h"
//#include "TestScores.h"
//#include "Circle.h"
//#include "Population.h"
//#include "MyArray10.h"
//#include "Payroll11.h"
//#include "Coin.h"
//#include "Die.h"
//#include "MortgagePayment.h"
//#include "FBPoint.h"
//#include "CashRegister.h"
//#include "InventoryItem.h"
//#include "Game21.h";
#include "Trivia19.h"
//#include "PatientAccount.h"
using namespace std;

// 1. Date
// Date.cpp
// Date.h
//
//int main() {
//	int d, m, y;
//	Date mydate;
//
//	cout << "Please enter the following date information.\n";
//	do {
//		cout << "Day(xx): "; cin >> d;
//	} while (!mydate.validDay(d));
//	do {
//		cout << "Month(xx): "; cin >> m;
//	} while (!mydate.validMonth(m));
//	cout << "Year(xxxx): "; cin >> y;
//	mydate.setDate(d, m, y);
//
//	mydate.dateForm1();
//	mydate.dateForm2();
//	mydate.dateForm3();
//
//	return 0;
//}


// 2. Employee Class
//
//int main() {
//
//	const int SIZE = 3;
//	Employee emp[SIZE] = {
//		Employee("Susan Meyer", 47899, "Accounting", "Vice President"),
//		Employee("Mark Jones", 39119, "IT", "Programmer"),
//		Employee("Joy Rogers", 81774, "Manufacturing", "Engineering")
//	};
//
//	cout << setw(18) << left << "NAME";
//	cout << setw(10) << left << "ID";
//	cout << setw(18) << left << "DEPARTMENT";
//	cout << setw(18) << left <<"POSITION" << endl;
//	for (int i = 0; i < 64; i++) {
//		cout << "-";
//	}
//	cout << endl;
//
//	for (int i = 0; i < SIZE; i++){
//
//		cout << setw(18) << left << emp[i].getName();
//		cout << setw(10) << left << emp[i].getID();
//		cout << setw(18) << left << emp[i].getDepartment();
//		cout << emp[i].getPosition() << endl;
//		cout << endl;
//	}
//
//	return 0;
//}

// 3. Car Class
//
//int main() {
//	int year;
//	std::string name;
//
//	cout << "Please enter the year the model of the car was made.\n";
//	cout << "YEAR: "; cin >> year;
//	cout << "Please enter the model name.\n";
//	cin.ignore();
//	cout << "NAME: "; getline(cin, name);
//	Car customer(year, name);
//	cout << endl;
//	cout << "Car Speed: " << customer.getSpeed() << endl << endl;
//	cout << "Using the accelorate function.\n" << endl;
//	for (int i = 0; i < 5; i++) {
//		customer.accelorate();
//		cout << "Car Speed: " << customer.getSpeed() << endl;
//	}
//	cout << endl;
//	cout << "Using the brake function.\n" << endl;
//
//	for (int i = 0; i < 5; i++) {
//		customer.brake();
//		cout << "Car Speed: " << customer.getSpeed() << endl;
//	}
//	return 0;
//}

// 4. Personal Information Class
//
//int main() {
//	PersonalInformation people[3] = {
//		PersonalInformation("Alex", "10101 Computer Memory Dr", 23, "(101) 010-1010"), //My Info
//		PersonalInformation("Alex", "10101 Computer Memory Dr", 23, "(101) 010-1010"), //"Friends info"
//		PersonalInformation("Alex", "10101 Computer Memory Dr", 23, "(101) 010-1010"), //"Friends info"
//	};
//	return 0;
//}

// 5. RetailItem Class
//
//int main() {
//
//	RetailItem item[3] = {
//		RetailItem("Jacket", 12, 59.95),
//		RetailItem("Designer Jeans", 40, 34.95),
//		RetailItem("Shirt", 20, 24.95)
//	};
//
//}

// 6.Inventory Class
//
//int main() {
//	int x;
//	double y;
//
//	const int SIZE = 3;
//	Inventory inv[SIZE];
//	
//	for (int i = 0; i < SIZE; i++) {
//		cout << "ENTRY " << i + 1 << endl;
//		do {
//			cout << "Item Number: "; cin >> x;
//		} while (!inv[i].validData(x));
//		inv[i].setItemNumber(x);
//
//		do {
//			cout << "Quantity: "; cin >> x;
//		} while (!inv[i].validData(x));
//		inv[i].setQuantity(x);
//
//		do {
//			cout << "Cost: $"; cin >> y;
//		} while (!inv[i].validData(y));
//
//		inv[i].setCost(x);
//		inv[i].setTotalCost(x, y);
//		cout << endl;
//	}
//	cout << "OBJECT INFORMATION" << endl;
//	cout << fixed << showpoint << setprecision(2);
//	for (int i = 0; i < SIZE; i++) {
//		cout << "ENTRY " << i + 1 << endl;
//		cout << "Item Number: " << inv[i].getItemNumber() << endl;
//		cout << "Quantity: " << inv[i].getQuantity() << endl;
//		cout << "Cost: $" << inv[i].getCost() << endl;
//		cout << "TOTAL COST: $" << inv[i].getTotalCost() << endl;
//		cout << endl;
//	}
//
//	return 0;
//}

// 7. TestScores Class
//
//int main() {
//	const int SIZE = 3;
//	TestScores student;
//	int test_num;
//	double score;
//
//	
//	cout << "ENTER TEST SCORES.\n" << endl;
//	for (int i = 0; i < SIZE; i++) {
//		cout << "TEST SCORE " << i + 1  << ": "; cin >> score;
//		student.setScore(i, score);
//	}
//
//	cout << "TEST SCORES FINISHED\n" << endl;
//	for (int i = 0; i < SIZE; i++) {
//		cout << "TEST SCORE " << i+1 <<": " <<student.getScore(i) << endl;
//	}
//	cout << fixed << setprecision(2) << showpoint;
//	cout << "AVERAGE SCORE: " << student.getAverge() << endl;
//	cout << endl;
//
//	cout << "Which test would you like to change?\n";
//	cout << "Test number: "; cin >> test_num;
//	cout << "Score: "; cin >> score;
//
//	student.setScore(test_num, score);
//	cout << endl;
//	cout << "Which test woud you like to view?\n";
//	cout << "Test number: "; cin >> test_num;
//	cout << student.getScore(test_num) << endl;
//	cout << endl;
//
//	cout << "NEW AVERAGE: " << student.getAverge();
//
//
//	return 0;
//}

// 8. Circle Class
//
//int main() {
//	double r;
//
//	cout << "Please enter the radius of a cirlce.\n";
//	cout << "RADIUS (feet): "; cin >> r;
//
//	Circle c(r);
//	cout << showpoint << fixed << setprecision(2);
//	cout << "CIRLCE INFO.\n" << endl;
//	cout << "RADIUS: " << c.getRadius() << "ft" << endl;
//	cout << "AREA: " << c.getArea() << "sqft" << endl;
//	cout << "DIAMETER: " << c.getDiameter() << "ft" << endl;
//	cout << "CIRCUMFERENCE: " << c.getCircumference() << "ft" << endl;
//	return 0;
//}

// 9. Population
//bool validPopData(int);
//bool validNumData(int);
//int main() {
//	int b, d, p;
//	cout << "Please enter the following information USA this year.\n";
//	do {
//		cout << "Population: "; cin >> p;
//	} while (!validPopData(p));
//	do {
//	cout << "Number of Births: "; cin >> b;
//	
//	} while (!validNumData(b));
//
//	do {
//		cout << "Number of Deaths: "; cin >> d;
//	
//	} while (!validNumData(d));
//
//
//	Population usa(b, p, d);
//	cout << endl;
//	cout << "Birth Rate: " << usa.getBirthRate() << endl;
//	cout << "Death Rate: " << usa.getDeathRate() << endl;
//
//	cout << "Please enter new information for the following\n";
//	do {
//		cout << "Population: "; cin >> p;
//	} while (!validPopData(p));
//	do {
//		cout << "Number of Births: "; cin >> b;
//
//	} while (!validNumData(b));
//	
//	do {
//		cout << "Number of Deaths: "; cin >> d;
//
//	} while (!validNumData(d));
//
//
//	usa.setBirthNum(b);
//	usa.setDeathNum(d);
//	usa.setPopulation(p);
//	cout << endl;
//	cout << "Birth Rate: " << usa.getBirthRate() << endl;
//
//	cout << "Death Rate: " << usa.getDeathRate() << endl;
//
//	return 0;
//}
//bool validPopData(int p) {
//	if (p < 1) {
//		std::cout << "ERROR: Please enter a number equal to or greater than 1.\n";
//		return false;
//	}
//
//	return true;
//}
//bool validNumData(int n) {
//	if (n < 0) {
//		std::cout << "ERROR: Please enter a number equal to or greater than 0.\n";
//		return false;
//	}
//
//	return true;
//
//}

// 10. Number Array Class
//
//int main() {
//	int size;
//	int index;
//	float num;
//	cout << "Enter the size of the array.\n";
//	cin >> size;
//	MyArray10 my_array(size);
//
//	cout << endl;
//	cout << "ARRAY" << endl;
//	my_array.showArray(size);
//	cout << endl;
//
//	cout << "Enter a index number to view the number in the array.\n";
//	cout << "Index: "; cin >> index;
//
//	
//
//	cout << "Number at index " << index << ": " << my_array.getValue(index - 1) << endl;
//
//	
//
//	cout << "Chose an index and change the number.\n";
//	cout << "Index: "; cin >> index;
//	cout << "Insert Number: "; cin >> num;
//	my_array.changeValue(index - 1, num);
//
//	cout << "Highest Number: " << my_array.getHighest(size) << endl;
//	cout << "Lowest Number: " << my_array.getLowest(size) << endl;
//	cout << "Average of The Array: " << my_array.getAverage(size) << endl;
//
//	cout << endl;
//	cout << "ARRAY" << endl;
//	my_array.showArray(size);
//	cout << endl;
//	return 0;
//}

// 11. Payroll
//
//int main() {
//	int empl_num, hours;
//	float rate;
//	cout << "How many employees do you have?\n";
//	cout << "NUM: "; cin >> empl_num;
//
//	unique_ptr<Payroll11[]> my_company(new Payroll11[empl_num]);
//
//	for (int i = 0; i < empl_num; i++) {
//		cout << "EMPLOYEE " << i + 1 << endl;
//		cout << "HOURS WORKED: "; cin >> hours;
//		cout << "PAY RATE: "; cin >> rate;
//		my_company[i].setHoursNRate(hours, rate);
//		cout << endl;
//	}
//
//	for (int i = 0; i < empl_num; i++) {
//		cout << "EMPLOYEE " << i + 1 << endl;
//		cout << "HOURS WORKED: " << my_company[i].showHours() << endl;
//		cout << "PAY RATE: $" << my_company[i].showRate() << endl;
//		cout << "GROSS PAY: $" << my_company[i].grossPay() << endl;
//		cout << endl;
//	}
//
//	
//	cout << endl;
//
//	
//	return 0;


// 12. Coin Toss Simulator
//
//int main() {
//	int c_heads = 0, c_tails = 0;
//	srand(time(NULL));
//
//	Coin game;
//
//	for (int i = 0; i < 20; i++) {
//
//		game.Toss();
//		cout << game.returnSideUp() << endl;
//		/*if (game.returnSideUp() == "Heads") {
//			c_heads++;
//		}
//		else {
//			c_tails++;
//		}*/
//
//	}
//	cout << endl;
//	cout << "Heads: " << c_heads << endl;
//	cout << "Tails: " << c_tails << endl;
//	
//	return 0;
//}

// 13. Tossing Coins for a Dollar
//
//int main() {
//	srand(time(NULL));
//	const int size = 3;
//	int flip_amount = 8;
//	char user_choice, choice_upper;
//	float total = 0;
//	Coin coin;
//
//	cout << "Welcome to \"Coins for a Dollar!\"" << endl << endl;
//	cout << "EXPLAINED:" << endl;
//	cout << "Flip either a Quarter, Dime or Nickle." << endl;
//	cout << "For everytime the coins lands on heads you will recieve that amount of cents." << endl;
//	cout << "Quarter = 25 , Dime = 10, Nickle = 5" << endl;
//	cout << "Get to $1.00 and you WIN!" << endl;
//	cout << "Go over $1.00 and you LOSE!" << endl;
//	cout << "You have " << flip_amount <<" times to flip!" << endl;
//	cout << endl;
//
//	for (int i = 0; i < flip_amount; i++) {
//		cout << "CHOOSE WHICH COIN TO FLIP?" << endl;
//		cout << "A) Quarter = 25 cents" << endl;
//		cout << "B) Dime = 10 cents" << endl;
//		cout << "C) Nickle = 5 cents" << endl;
//		cout << endl;
//		cout << showpoint << fixed << setprecision(2);
//
//		do {
//			cout << "CHOICE: "; cin >> user_choice;
//			choice_upper = toupper(user_choice);
//			if (choice_upper != 'A' && choice_upper != 'B' && choice_upper != 'C') {
//				cout << "ERROR: Please enter a valid choice.\n";
//			}
//		} while (choice_upper != 'A' && choice_upper != 'B' && choice_upper != 'C');
//
//		coin.Toss();
//
//		switch (choice_upper
//			) {
//		case 'A':
//			if (coin.returnSideUp() == "Heads") {
//				cout << coin.returnSideUp() << "+ .25" << endl;
//
//				total += .25;
//				}
//			else {
//				cout << coin.returnSideUp() << "+ 0" << endl;
//			}
//			break;
//		case 'B':
//			if (coin.returnSideUp() == "Heads") {
//				cout << coin.returnSideUp() << "+ .10" << endl;
//				total += .10;
//			}
//			else {
//				cout << coin.returnSideUp() << "+ 0" << endl;
//			}
//			break;
//		case 'C':
//			if (coin.returnSideUp() == "Heads") {
//				cout << coin.returnSideUp() << "+ .5"<< endl;
//				total += .05;
//			}
//			else {
//				cout << coin.returnSideUp() << "+ 0" << endl;
//			}
//			break;
//		default:
//			cout << "ERRROR.\n";
//			break;
//		}
//		cout << "TOTAL: $" << total << endl;
//		cout << "FLIPS LEFT: " << flip_amount - (i+1) << endl;
//		if (total == 1) {
//			cout << endl << "YOU WIN!" << endl;
//			return 0;
//		}
//		else if (total > 1) {
//			cout << "YOU LOSE!" << endl;
//			return 0;
//		}
//		cout << endl;
//	}
//	
//
//	cout << "YOU LOSE!" << endl;
//
//	return 0;
//}


// 14. Fishing Game Simulation
//void menu();
//int main() {
//	const int dice6 = 6;
//	bool end = false;
//	int user_choice, total_points = 0;
//	Die my_die(dice6);
//	cout << "Welcome to \"Fishing Game Simulation\"!" << endl;
//	cout << endl;
//	do {
//		
//		menu();
//		do {
//			cout << "CHOICE: "; cin >> user_choice;
//			if (user_choice != 1 && user_choice != 2) {
//				cout << "ERROR: Please enter a valid menu choice.\n";
//			}
//		} while (user_choice != 1 && user_choice != 2);
//
//		if (user_choice == 2) {
//			end = true;
//			break;
//		}
//		else {
//			my_die.roll();
//			cout << "You cought a..." << endl;
//			switch (my_die.getValue()) {
//			case 1:
//				cout << "BIG FISH! + 100 points" << endl;
//				total_points += 100;
//				cout << "TOTAL POINTS: " << total_points << endl;
//				break;
//			case 2:
//				cout << "small fish! + 10 points" << endl;
//				total_points += 10;
//				cout << "TOTAL POINTS: " << total_points << endl;
//				break;
//			case 3:
//				cout << "Jelly Fish! + 5 points" << endl;
//				total_points += 5;
//				cout << "TOTAL POINTS: " << total_points << endl;
//				break;
//			case 4:
//				cout << "Old Boot! - 50 points" << endl;
//				total_points -= 50;
//				cout << "TOTAL POINTS: " << total_points << endl;
//				break;
//			case 5:
//				cout << "Crab! + 20 points" << endl;
//				total_points += 20;
//				cout << "TOTAL POINTS: " << total_points << endl;
//				break;
//			case 6:
//				cout << "Squid! + 50 points" << endl;
//				total_points += 50;
//				cout << "TOTAL POINTS: " << total_points << endl;
//				break;
//			default:
//				cout << "ERROR:" << endl;
//				break;
//			}
//		}
//	} while (end == false);
//
//	cout << "TOTAL POINTS: " << total_points << endl;
//	return 0;
//}
//
//void menu() {
//	cout << "MENU" << endl;
//	cout << "1. Fish" << endl;
//	cout << "2. Quit" << endl;
//	cout << endl;
//}

// 15. Mortgage Payments
//
//int main() {
//	double loan, interest;
//	int years;
//	cout << "MORTGAGE INFO" << endl << endl;
//
//	do {
//		cout << "Enter the loan amount: $"; cin >> loan;
//		if (loan < 0) {
//			cout << "ERROR: Please enter a positive value.\n";
//		}
//	} while (loan < 0);
//
//	do {
//		cout << "Enter the interest rate: "; cin >> interest;
//		if (interest < 0) {
//			cout << "ERROR: Please enter a positive value.\n";
//		}
//	} while (interest < 0);
//
//	do {
//		cout << "Enter the number of years: "; cin >> years;
//		if (years < 0) {
//			cout << "ERROR: Please enter a positive value.\n";
//		}
//	} while (years < 0);
//
//
//	MortgagePayment my_m(loan, interest, years);
//	cout << showpoint << fixed << setprecision(2);
//	cout << "Your Monthly Payment: $" << my_m.monthlyPayment() << endl;
//	cout << "Your Total Payments: $" << my_m.totalPayment() << endl;
//
//	return 0;
//}

// 16. Freezing and Boiling Point
//
//int main() {
//	float temp;
//	cout << "Please enter the temperature of the room.\n";
//	cout << "TEMP: "; cin >> temp;
//	FBPoint liquid(temp);
//	cout << endl;
//	cout << "AT TEMPREATURE " << temp << " ..." << endl;
//	if (liquid.isEthylBoiling()) {
//		cout << "Ethyl Boils" << endl;
//	}
//	if (liquid.isEthylFreezing()) {
//		cout << "Ethyl Freezes" << endl;
//	}
//	if (liquid.isOxygenBoiling()) {
//		cout << "Oxygen Boils" << endl;
//	}
//	if (liquid.isOxygenFreezing()) {
//		cout << "Oxygen Freezes" << endl;
//	}
//	if (liquid.isWaterBoiling()) {
//		cout << "Water Boils" << endl;
//	}
//	if (liquid.isWaterFreezing()) {
//		cout << "Water Freezes" << endl;
//	}
//	return 0;
//}

// 17. Cash Register
//void showItems(InventoryItem*);
//const int SIZE = 5;
//int item_num, item_quan;
//double subtotal = 0, tax = 0, total = 0;
//char cont, up_cont;
//int main() {
//	InventoryItem item[SIZE] = { 
//		InventoryItem("Towels", 8.50, 200),
//		InventoryItem("Bed Covers", 20.00, 150),
//		InventoryItem("Curtain", 15.50, 75),
//		InventoryItem("Pillows", 10.00, 500),
//		InventoryItem("Shower Curtain", 12.50, 125) 
//		};
//
//	CashRegister register1;
//	bool end = false;
//	showItems(item);
//	cout << endl;
//	do {
//
//
//		do {
//			cout << "Add an Item to The Cart" << endl;
//			cout << "Item Number #: "; cin >> item_num;
//			if (item_num < 1 || item_num > 5) {
//				cout << "ERROR: Please enter a valid item number.\n";
//			}
//		} while (item_num < 1 || item_num > 5);
//		item_num -= 1;
//		do {
//			cout << "How many of the item?" << endl;
//			cout << "Item Quantity: "; cin >> item_quan;
//			if (item_quan < 0) {
//				cout << "ERROR: Please enter a positive value.\n";
//			}
//			if ((item[item_num].getUnits() - item_quan) < 0) {
//				cout << "ERROR: Not enough units in inventory.\n";
//				cout << item[item_num].getUnits() << " left.\n";
//			}
//		} while (item_quan < 0 || (item[item_num].getUnits() - item_quan) < 0);
//		cout << endl;
//		cout << "Enter new item?" << endl;
//
//		/*
//		Update the variables;
//		*/
//		item[item_num].setUnits(item[item_num].getUnits() - item_quan); // sets the new unit amount left for that item
//
//		subtotal += register1.calcSubtotal(item[item_num].getCost(), item_quan);
//		tax += register1.calcTax(item[item_num].getCost(), item_quan);
//		total += register1.calcTotal(item[item_num].getCost(), item_quan);
//
//		/*
//		Determine whether to continue
//		*/
//		do {
//			cout << "(Y/N): "; cin >> cont;
//			up_cont = toupper(cont);
//			if (up_cont != 'Y' && up_cont != 'N') {
//				cout << "ERROR: Please enter a valid option.\n";
//			}
//		} while (up_cont != 'Y' && up_cont != 'N');
//
//	} while (up_cont != 'N');
//
//	cout << showpoint << fixed << setprecision(2);
//
//	cout << "Subtotal: $" << subtotal << endl;
//	cout << "Tax: $" << tax << endl;
//	cout << "TOTAL: $" << total << endl;
//	return 0;
//}
//
//void showItems(InventoryItem* d){
//	cout << setw(14) << left << "ITEM NUMBER#" << setw(15) << left << "DESCRIPTION" << setw(10) << left << "COST" << setw(10) << left << "UNITS" << endl;
//
//	for (int i = 0; i < SIZE; i++) {
//		cout << "# " << i+1 << ":" << setw(10) << left << "" << setw(15) << left <<d[i].getDescription() << "|$" << setw(8) << left << d[i].getCost() << "|" <<setw(10) << left << d[i].getUnits() << endl;
//	}
//}

// 18. A Game of 21
//
//int main() {
//	srand(time(0));
//
//	char cont, up_cont;
//
//	Die dice(12);
//	Game21 my_game;
//	bool check = false;
//	cout << "Welcome to \"Game 21\"." << endl;
//	cout << "The computer will also roll dice, but you won't know it's total untill you win, stop or lose the game.\n";
//	cout << "Closest to 21 WINS!" << endl;
//
//	cout << "Click \'ENTER\' to roll the dice.";
//	cin.get();
//	do {
//
//		dice.roll();
//		my_game.addCompScore(dice.getValue());
//
//		dice.roll();
//		my_game.addUserScore(dice.getValue());
//		cout << "Your Score: " << my_game.getUserScore() << endl;
//		if (my_game.getUserScore() == 21 && my_game.getCompScore() == 21) {
//			cout << endl;
//			cout << "YOU AND THE COMPUTER WIN!" << endl;
//			cout << "..." << endl;
//			cout << "Your Score: " << my_game.getUserScore() << endl;
//			cout << "Computer Score: " << my_game.getCompScore() << endl;
//			check = true;
//
//		}
//		if (my_game.getUserScore() == 21) {
//			cout << endl;
//			cout << "YOU WIN!" << endl;
//			cout << "..." << endl;
//			cout << "Your Score: " << my_game.getUserScore() << endl;
//			cout << "Computer Score: " << my_game.getCompScore() << endl;
//			check = true;
//		}
//		if (my_game.getUserScore() > 21) {
//			cout << endl;
//			cout << "YOU LOSE!" << endl;
//			cout << "..." << endl;
//			cout << "Your Score: " << my_game.getUserScore() << endl;
//			cout << "Computer Score: " << my_game.getCompScore() << endl;
//			check = true;
//			break;
//		}
//		cout << "Roll Again?" << endl;
//		
//		do {
//			cout << "(Y/N): "; cin >> cont;
//			up_cont = toupper(cont);
//			if (up_cont != 'Y' && up_cont != 'N') {
//				cout << "ERROR: Please enter a valid option.\n" << endl;
//			}
//		} while (up_cont != 'Y' && up_cont != 'N');
//		
//	} while (up_cont != 'N');
//	
//	if (check == false) {
//		cout << endl;
//
//		cout << my_game.Win() << endl;
//
//		cout << "Your Score: " << my_game.getUserScore() << endl;
//		cout << "Computer Score: " << my_game.getCompScore() << endl;
//	}
//
//	
//	return 0;
//}

 //19. Trivia Game
//
//int main() {
//	srand(time(0));
//	const int QUESTION = 10;
//	int player1_score = 0, player2_score = 0;
//	int player1_choice, player2_choice;
//
//	Trivia19 game;
//
//	for (int i = 0; i < QUESTION; i++) {
//		game.playGame(i);
//
//		cout << "Player 1: "; cin >> player1_choice;
//	
//		cout << "Player 2: "; cin >> player2_choice;
//		
//		cout << endl;
//
//
//		if (game.isCorrect(player1_choice, i)) {
//			cout << "CORRECT choice player 1!" << endl;
//			player1_score++;
//		}
//		else {
//			cout << "WRONG choice player 1!" << endl;
//		}
//
//		if (game.isCorrect(player2_choice, i)) {
//			cout << "CORRECT choice player 2!" << endl;
//			player1_score++;
//		}
//		else {
//			cout << "WRONG choice player 2!" << endl;
//		}
//		cout << endl;
//	}
//
//
//	cout << endl;
//	if (player1_score < player2_score) {
//		cout << "PLAYER 2 WINS!" << endl;
//	}
//	else {
//		cout << "PLAYER 1 WINS!" << endl;
//	}
//
//return 0;
//}

// 20. Patient Fees
//void showMainMenu();
//int main() {
//	int user_m_choice, user_s_choice, user_p_choice, num_days;
//	PatientAccount alex;
//	do {
//
//		showMainMenu();
//		do {
//			cout << "ENTER CHOICE: "; cin >> user_m_choice;
//			if (user_m_choice < 1 || user_m_choice > 3) {
//				cout << "ERROR: Please enter a valid option.\n";
//			}
//		} while (user_m_choice < 1 || user_m_choice > 3);
//
//
//		switch (user_m_choice) {
//		case 1:
//			cout << endl;
//			alex.showSurgePnN();
//			cout << endl;
//			do {
//				cout << "ENTER CHOICE: "; cin >> user_s_choice;
//				if (user_s_choice < 1 || user_s_choice > 5) {
//					cout << "ERROR: Please enter a valid option.\n";
//				}
//			} while (user_s_choice < 1 || user_s_choice > 5);
//			
//			alex.addSurgeCost(user_s_choice-1);
//
//			cout << endl;
//			break;
//		case 2:
//			cout << endl;
//			alex.showPharmacyPnN();
//			cout << endl;
//			do {
//				cout << "ENTER CHOICE: "; cin >> user_p_choice;
//				if (user_p_choice < 1 || user_p_choice > 5) {
//					cout << "ERROR: Please enter a valid option.\n";
//				}
//			} while (user_p_choice < 1 || user_p_choice > 5);
//
//			alex.addPharmCost(user_p_choice-1);
//
//			cout << endl;
//
//			break;
//		case 3:
//			cout << endl;
//			cout << "How long has the patient stayed in the hospital?" << endl;
//			cout << "NUM DAYS: "; cin >> num_days;
//			alex.addDailyRate(num_days);
//			break;
//		default:
//			break;
//		}
//
//	} while (user_m_choice != 3);
//
//	cout << "TOTAL CHARGES COME TO..." << endl;
//	cout << "$" << alex.getTotalCharges() << endl;
//
//	return 0;
//}
//void showMainMenu() {
//	cout << "-----------------------" << endl;
//	cout << "       Main Menu       " << endl;
//	cout << "-----------------------" << endl;
//
//	cout << "1. Add Surgery Type" << endl;
//	cout << "2. Add Medication Type" << endl;
//	cout << "3. Check Patient Out" << endl;
//	cout << endl;
//}
