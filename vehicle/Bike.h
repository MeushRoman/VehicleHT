#pragma once
#include "GroundVehicle.h"

class Bike 
	:public GroundVehicle
{
	string type;

public:

	Bike(string type) :GroundVehicle()
	{
		setType(type);
	}

	void setType(string type)
	{
		cout << "Enter type of bike: ";
		cin >> type;
		this->type = type;
	}

	string getTypeBike() const { return type; }

	void info() const
	{
		GroundVehicle::info();
		cout << "Type of the bike = " << getTypeBike() << endl;
	}
};