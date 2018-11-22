#pragma once
#include "AirVehicle.h"
class AirBaloon 
	:public airVehicle
{
	unsigned int volume;

public:

	AirBaloon(unsigned int volume) 
		:airVehicle(volume)
	{
		setVolume(volume);
	}

	void setVolume(unsigned int volume)
	{
		cout << "Enter volume of air baloon: ";
		cin >> volume;
		this->volume = volume;
	}

	unsigned int getVolume() const { return volume; }

	void info() const
	{
		airVehicle::info();
		cout << "Volume of air baloon = " << getVolume() << endl;
	}
};
