#pragma once
class FBPoint
{

private:
	float temperature;
public:
	//Constructor
	FBPoint();
	FBPoint(float);
	//Mutator;
	void changeTemp(float);
	//Accessor
	float getTemp();
	//Memeber Functions
	bool isEthylFreezing();
	bool isEthylBoiling();
	bool isOxygenFreezing();
	bool isOxygenBoiling();
	bool isWaterFreezing();
	bool isWaterBoiling();

};

