#pragma once
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include <iostream>
class MyArray10
{

private:
	float* my_f_array;
	int num;
	void initArray(int size) {
		my_f_array = new float[size];
		srand(time(0));
		for (int i = 0; i < size; i++) {
			my_f_array[i] = static_cast<float> (rand() % 10 + 1);
		}
	}

public:

	//Constructor
	MyArray10(int);

	//Mutators
	void changeValue(int, float);

	//Accessors
	float getValue(int) const;
	float getLowest(int) const;
	float getHighest(int) const;
	float getAverage(int) const;
	void showArray(int) const;

	//Desctructor
	~MyArray10() {
		delete[] my_f_array;
	}

};

