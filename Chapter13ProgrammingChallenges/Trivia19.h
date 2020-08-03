#pragma once
#include <string>
#include <memory>

class Trivia19
{
private:

	std::string* question;
	std::string** answer;
	int correct_an[10];
	void storeCorrectAnswerIndex(int c) {
		static int correct = 0;
		correct_an[correct] = c;
		correct++;
	}


public:
	//Constructor
	Trivia19();
	//Mutator
	//void setQuestion(std::string);
	//Accessor
	void playGame(int);
	//Destructor

	//Member Function
	bool isCorrect(int, int) const;

};

