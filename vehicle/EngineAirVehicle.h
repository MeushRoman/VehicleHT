#pragma once
#include "AirVehicle.h"

class EngineAirVehicle 
	:public airVehicle
{
	unsigned int enginePower;

public:

	EngineAirVehicle()
	{
		setEnginePower(enginePower);
	}

	EngineAirVehicle(unsigned int enginePower) 
		:airVehicle(enginePower)
	{
		setEnginePower(enginePower);
	}

	void setEnginePower(unsigned int enginePower)
	{
		cout << "Enter engine power of vehicle: ";
		cin >> enginePower;
		this->enginePower = enginePower;
	}

	unsigned int getEnginePower() const { return enginePower; }

	void info() const
	{
		airVehicle::info();
		cout << "Engine power of vehicle = " << getEnginePower() << endl;
	}
};