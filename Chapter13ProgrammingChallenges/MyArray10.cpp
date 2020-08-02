#include "MyArray10.h"
#include <iostream>



//Constructor
MyArray10::MyArray10(int num) {
	initArray(num);
}

//Mutators
void MyArray10::changeValue(int num, float new_num) {
	my_f_array[num] = new_num;
}

//Accessors
float MyArray10::getValue(int num) const {
	return my_f_array[num];
}
float MyArray10::getLowest(int size) const {
	int smallest_num = my_f_array[0];
	int smallest_index = 0;
	for (int i = 0; i < size; i++) {
		if (smallest_num > my_f_array[i]) {
			smallest_index = i;
			smallest_num = my_f_array[i];
		}
	}
	return my_f_array[smallest_index];
}
float MyArray10::getHighest(int size) const {
	int largest_num = my_f_array[0];
	int largest_index = 0;
	for (int i = 0; i < size; i++) {
		if (largest_num < my_f_array[i]) {
			largest_index = i;
			largest_num = my_f_array[i];
		}
	}
	return my_f_array[largest_index];

}
float MyArray10::getAverage(int size) const {
	float total = 0, average;
	for (int i = 0; i < size; i++) {
		total += my_f_array[i];
	}

	average = total / size;
	return average;
}

void MyArray10::showArray(int size) const {

	for (int i = 0; i < size; i++) {
		
		std::cout << "Index "<< i+1 << ": " << my_f_array[i] << std::endl;
	}
}