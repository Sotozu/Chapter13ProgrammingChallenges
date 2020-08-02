#include "FBPoint.h"
//Constructor
FBPoint::FBPoint() {
	temperature = 0;
}
FBPoint::FBPoint(float t) {
	temperature = t;
}
//Mutator;
void FBPoint::changeTemp(float t) {
	temperature = t;
}
//Accessor
float FBPoint::getTemp() {
	return temperature;
}

//Memeber Functions
bool FBPoint::isEthylFreezing() {
	if (temperature <= -173) {
		return true;
	}
	else {
		return false;
	}
}
bool FBPoint::isEthylBoiling() {
	if (temperature >= 172) {
		return true;
	}
	else {
		return false;
	}
}
bool FBPoint::isOxygenFreezing() {
	if (temperature <= -362) {
		return true;
	}
	else {
		return false;
	}
}
bool FBPoint::isOxygenBoiling() {
	if (temperature >= -306) {
		return true;
	}
	else {
		return false;
	}
}
bool FBPoint::isWaterFreezing() {
	if (temperature <= 32) {
		return true;
	}
	else {
		return false;
	}
}
bool FBPoint::isWaterBoiling() {
	if (temperature >= 212) {
		return true;
	}
	else {
		return false;
	}
}
