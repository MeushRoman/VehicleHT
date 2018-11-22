#pragma once
#include "Vehicle.h"

class GroundVehicle 
	:public Vehicle
{
	unsigned int cntWheels;

public:

	GroundVehicle()
	{
		fill();
	}

	GroundVehicle(unsigned int cntWheels)
	{
		setCntWheels(cntWheels);
		fill();
	}

	void fill()
	{
		Vehicle::fill();
		cout << "Enter number of wheels: ";
		cin >> cntWheels;
		setCntWheels(cntWheels);
	}

	void setCntWheels(unsigned int cntWheels)
	{
		this->cntWheels = cntWheels;
	}

	unsigned int getCntWheels() const { return cntWheels; }

	void info() const
	{
		Vehicle::info();
		cout << "Number of wheels = " << getCntWheels() << endl;
	}
};
