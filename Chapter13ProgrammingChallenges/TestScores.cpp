#include "TestScores.h"

//Constructor
TestScores::TestScores() {
	test_score[0] = 0;
	test_score[1] = 0;
	test_score[2] = 0;
}
TestScores::TestScores(double one, double two, double three) {
	test_score[0] = one;
	test_score[1] = two;
	test_score[2] = three;
}
//Accessor
double TestScores::getScore(int num) const{
	return test_score[num];
}
//Mutator
void TestScores::setScore(int num, double score) {
	test_score[num] = score;
}

//Other

double TestScores::getAverge() {
	double average = (test_score[0] + test_score[1] + test_score[2]) / 3;
	return average;
}