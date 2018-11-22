#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
	unsigned int maxSpeed;
	string color;
	unsigned int cntPassengers;
	string model;
	bool hasEngine;

public:

	Vehicle(unsigned int maxSpeed = 0, string color = "black", unsigned int cntPasseng = 0, string model = "model", bool hasEngine = 1);
	void fill()
	{
		cout << "Enter max speed of vehicle: ";
		cin >> maxSpeed;
		cout << "Enter color of vehicle: ";
		cin >> color;
		cout << "Enter number of passengers, which vehicle can afford: ";
		cin >> cntPassengers;
		cout << "Enter model of vehicle: ";
		cin >> model;
		cout << "Is vehicle has an engine: (1-yes, 0-no): ";
		cin >> hasEngine;
		setMaxSpeed(maxSpeed);
		setColor(color);
		setCntPassengers(cntPassengers);
		setModel(model);
		setHasEngine(hasEngine);
	}

	void setMaxSpeed(unsigned int maxSpeed)
	{
		this->maxSpeed = maxSpeed;
	}
	void setColor(string color) 
	{
		this->color = color; 
	}
	void setCntPassengers(unsigned int cntPassengers) 
	{
		this->cntPassengers = cntPassengers;
	}
	void setModel(string model) { 
		this->model = model; 
	}
	void setHasEngine(bool hasEngine) 
	{ 
		this->hasEngine = hasEngine; 
	}

	unsigned int getMaxSpeed() const { return maxSpeed; }
	string getColor() const { return color; }
	unsigned int getCntPassengers() const { return cntPassengers; }
	string getModel() const { return model; }
	bool getHasEngine() const { return hasEngine; }

	void info() const
	{
		cout << "Max speed = " << getMaxSpeed() << endl;
		cout << "Color = " << getColor() << endl;
		cout << "Number of passengers = " << getCntPassengers() << endl;
		cout << "Model = " << getModel() << endl;
		cout << "Engine (1-yes,2-no) = " << getHasEngine() << endl;
	}
};

Vehicle::Vehicle(unsigned int maxSpeed, string color, unsigned int cntPasseng, string model, bool hasEngine)
{
	setMaxSpeed(maxSpeed);
	setColor(color);
	setCntPassengers(cntPasseng);
	setModel(model);
	setHasEngine(hasEngine);
}