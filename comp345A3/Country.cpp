#include "Country.h"


Country::Country()
{
}

Country::Country(string name, string owner, int nbOfArmy)
{
	this->name = name;
	this->owner = owner;
	this->nbOfArmy = nbOfArmy;
}


Country::~Country()
{
}

void Country::setName(string name)
{
	this->name = name;
}


string Country::getName()
{
	return name;
}
void Country::setOwner(string newOwner)
{
	owner = newOwner;
}
string Country::getOwner()
{
	return owner;
}
void Country::setArmy(int newArmy)
{
	nbOfArmy = newArmy;
}
int Country::getArmy()
{
	return nbOfArmy;
}