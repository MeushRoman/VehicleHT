#pragma once
#include "WaterVehicle.h"

class Boat :public WaterVehicle
{
public:
	Boat() :WaterVehicle() {}

	void info() const
	{
		WaterVehicle::info();
	}
};
