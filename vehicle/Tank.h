#pragma once
#include "Car.h"

class Tank :public Car
{
	unsigned int power;

public:

	Tank(unsigned int power) 
		:Car()
	{
		setPower(power);
	}

	void setPower(unsigned int power)
	{
		cout << "Enter power of tank: ";
		cin >> power;
		this->power = power;
	}

	unsigned int getTankPower() const { return power; }

	void info() const
	{
		Car::info();
		cout << "Power of tank = " << getTankPower() << endl;
	}
};