#include "Population.h"

//Constructors
Population::Population() {

	birth_num = 0;
	population = 0;
	death_num = 0;
}
Population::Population(int b, int p, int d) {
	birth_num = b;
	population = p;
	death_num = d;
}

//Mutators
void Population::setBirthNum(int b) {
	birth_num = b;
}
void Population::setDeathNum(int d) {
	death_num = d;
}
void Population::setPopulation(int p) {
	population = p;
}

//Accessors
float Population::getBirthRate() const {
	return birth_num / static_cast<float>(population);
}
float Population::getDeathRate() const {
	return death_num /static_cast<float>(population);
}


