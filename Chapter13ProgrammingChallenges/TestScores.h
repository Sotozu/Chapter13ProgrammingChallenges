#pragma once
class TestScores
{

private:
	double test_score[3];
public:
	//Constructor
	TestScores();
	TestScores(double, double, double);
	//Accessor
	double getScore(int) const;
	//Mutator
	void setScore(int, double);
	//Other
	double getAverge();
};

