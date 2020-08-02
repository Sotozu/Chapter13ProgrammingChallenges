#pragma once
#include <string>
class PersonalInformation
{
private:
	std::string name;
	std::string address;
	int age;
	std::string phone;

public:
	//Constructor
	PersonalInformation();
	PersonalInformation(std::string, std::string, int, std::string);
	

	//Accessor
	std::string getName() const;
	std::string getAddress() const;
	int getAge() const;
	std::string getPhone() const;

	//Mutators
	void setName(std::string);
	void setAddress(std::string);
	void setAge(int);
	void setPhone(std::string);



};

