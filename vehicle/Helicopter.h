#pragma once
#include "EngineAirVehicle.h"

class Helicopter 
	:public EngineAirVehicle
{
	unsigned int bladeSize;

public:
	Helicopter(unsigned int bladeSize) 
		:EngineAirVehicle(bladeSize)
	{
		setBladeSize(bladeSize);
	}

	void setBladeSize(unsigned int bladeSize)
	{
		cout << "Enter blade size of helicopter: ";
		cin >> bladeSize;
		this->bladeSize = bladeSize;
	}

	unsigned int getBladeSize() const { return bladeSize; }

	void info() const
	{
		EngineAirVehicle::info();
		cout << "Blade size of helicopter = " << getBladeSize() << endl;
	}
};