#pragma once
#include "GroundVehicle.h"

class Car :public GroundVehicle
{
	string type;

public:

	Car() {}

	Car(string type)
		:GroundVehicle()
	{
		setType(type);
	}

	void setType(string type)
	{
		cout << "Enter type of car: ";
		cin >> type;
		this->type = type;
	}

	string getTypeCar() const { return type; }

	void info() const
	{
		GroundVehicle::info();
		cout << "Type of the car = " << getTypeCar() << endl;
	}
};