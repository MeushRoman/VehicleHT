#pragma once
#include"Vehicle.h"

class airVehicle :public Vehicle
{
	unsigned int altitude;

public:

	airVehicle()
	{
		fill();
	}

	airVehicle(unsigned int altitude)
	{
		setAltitude(altitude);
		fill();
	}

	void fill()
	{
		Vehicle::fill();
		cout << "Enter an altitude of vehicle: ";
		cin >> altitude;
		setAltitude(altitude);
	}

	void setAltitude(unsigned int altitude)
	{
		this->altitude = altitude;
	}

	unsigned int getAltitude() const { return altitude; }

	void info() const
	{
		Vehicle::info();
		cout << "Altitude = " << getAltitude() << endl;
	}
};
