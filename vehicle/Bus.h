#pragma once
#include "Car.h"

class Bus :public Car
{
public:
	Bus() :Car() {}

	void info() const
	{
		Car::info();
	}
};