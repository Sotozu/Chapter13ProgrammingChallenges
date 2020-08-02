#include "Game21.h"
#include <string>
//Constructor
Game21::Game21() {
	compScore = 0;
	userScore = 0;

}
//Mutator
void Game21::addCompScore(int c) {
	compScore += c;
}
void Game21::addUserScore(int u) {
	userScore += u;
}
//Accessor
int Game21::getCompScore() {
	return compScore;
}
int Game21::getUserScore() {
	return userScore;
}

//Member Functions
std::string Game21::Win() {
	if (compScore < userScore) {
		return "You Win!";
	}
	else if (compScore > 21) {
		return "You Win!";
	}
	else if (compScore > userScore && compScore <= 21) {
		return "Computer Wins!";
	}
}