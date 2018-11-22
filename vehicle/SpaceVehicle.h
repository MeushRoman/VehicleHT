#pragma once
#include "Vehicle.h"
class SpaceVehicle 
	:public Vehicle
{
	string fuelType;

public:

	SpaceVehicle()
	{
		fill();
	} 

	SpaceVehicle(string fuelType)
	{
		setFuelType(fuelType);
		fill();
	}

	void fill()
	{
		Vehicle::fill();
		cout << "Enter fuel type of rocket: ";
		cin >> fuelType;
		setFuelType(fuelType);
	}

	void setFuelType(string fuelType)
	{
		this->fuelType = fuelType;
	}

	string getFuelType() const { return fuelType; }

	void info() const
	{
		Vehicle::info();
		cout << "Fuel type of rocket = " << getFuelType() << endl;
	}
};