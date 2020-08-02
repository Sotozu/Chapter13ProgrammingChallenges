#pragma once


class Employee {

private:
	 
	std::string name;
	int idNumber;
	std::string department;
	std::string position;

public:
	//Constructors
	Employee();
	Employee(std::string, int, std::string, std::string);
	Employee(std::string, int id);

	//Mutators
	void setName(std::string);
	void setID(int);
	void setDepartment(std::string);
	void setPosition(std::string);

	//Accessors
	std::string getName() const;
	int getID() const;
	std::string getDepartment() const;
	std::string getPosition() const;
};