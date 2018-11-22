#pragma once
#include <iostream>

using namespace std;

class PlaneWing
{
	unsigned int liftingForce;

public:

	void setLiftingForce(unsigned int liftingForce)
	{
		cout << "Enter lifting force of the plane wing: ";
		cin >> liftingForce;
		this->liftingForce = liftingForce;
	}

	unsigned int getLiftingForce() const
	{
		return liftingForce;
	}

	void info() const
	{
		cout << "Lifting force of the plane wing = " << getLiftingForce() << endl;
	}
};