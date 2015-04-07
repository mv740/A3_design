#pragma once
#include <string>
#include "Player.h"

class Country
{
public:
	Country();
	Country(string name, string owner, int nbOfArmy);
	~Country();

	string getName();
	void setName(string name);

	void setOwner(string newOwner);
	string getOwner();

	int getArmy();
	void setArmy(int newArmy);

private:
	string name;
	string owner;
	int nbOfArmy;
};

