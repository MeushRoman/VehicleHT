#pragma once
#include "Boat.h"

class Yacht :public Boat
{
	unsigned int cntDecks;

public:

	Yacht(unsigned int cntDecks) 
		:Boat()
	{
		setDecks(cntDecks);
	}

	void setDecks(unsigned int cntDecks)
	{
		cout << "Enter number of decks in yacht: ";
		cin >> cntDecks;
		this->cntDecks = cntDecks;
	}

	unsigned int getDecks() const { return cntDecks; }

	void info() const
	{
		Boat::info();
		cout << "Number of decks in yacht = " << getDecks() << endl;
	}
};