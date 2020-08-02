#pragma once
class Population
{

private:
	int birth_num;
	int population;
	int death_num;

public:
	//Constructors
	Population();
	Population(int,int,int);

	//Mutators
	void setBirthNum(int);
	void setDeathNum(int);
	void setPopulation(int);
	
	//Accessors
	float getBirthRate() const;
	float getDeathRate() const;

	//Other


	
};

