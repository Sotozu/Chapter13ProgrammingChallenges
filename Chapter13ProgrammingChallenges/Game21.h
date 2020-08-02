#pragma once
#include <string>
class Game21
{
private:
	int compScore;
	int userScore;
public:
	//Constructor
	Game21();
	//Mutator
	void addCompScore(int);
	void addUserScore(int);
	//Accessor
	int getCompScore();
	int getUserScore();

	//Member Functions
	std::string Win();
	
};

