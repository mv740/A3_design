#include "Player.h"

//The observable object notifies all its registered observers using Notify()

Player::Player()
{
	this->cardGivenThisTurn = false;
	this->percentBattleLost = 0.0;
	this->percentBattleWon = 0.0;
	this->percentWorldControlled = 0.0;
	this->battleLost = 0;
	this->battleWon = 0;
	this->totalCountriesControlled = 0;
}


Player::~Player()
{
}


int Player::getNbCountriesControlled()
{
	return this->totalCountriesControlled;
}

int Player::getTotalArmy()
{
	return this->totalArmy;
}

int Player::getTotalCards()
{
	return this->totalCards;
}

string Player::getPlayerName()
{
	return this->playerName;
}

void Player::setNbCountriesControlled(int newTotal)
{
	this->totalCountriesControlled = newTotal;
	Notify();
}

void Player::setTotalArmy(int newTotal)
{
	this->totalArmy = newTotal; 
	Notify();
}

void Player::setTotalCards(int newTotal)
{
	this->totalCards = newTotal;
	Notify();
}

void Player::setPlayerName(string newName)
{
	this->playerName = newName; 
	Notify();
}


//used for card counting
////////////////////////////////////////////////


void Player::drawCard()
{

	int newTotal = this->totalCards + 1;
	this->cardGivenThisTurn = true;
	setTotalCards(newTotal);
}

void Player::resetCardGiven()
{
	this->cardGivenThisTurn = false;
}


//////data used by decorator 

void Player::battleWonIncrement()
{
	this->battleWon += 1;
	this->setPercentBattleWon();
	Notify();
}
void Player::battleLooseIncrement()
{
	this->battleLost += 1;
	this->setPercentBattleLost();
	Notify();
}

double Player::getPercentWorldControlled()
{
	return this->percentWorldControlled;
}

double Player::getPercentBattleWon()
{
	return this->percentBattleWon;
}
double Player::getPercentBattleLost()
{
	return this->percentBattleLost;
}

void Player::setPercentBattleWon()
{
	this->percentBattleWon = 100 * ((this->battleWon) / (this->battleWon + this->battleLost));
	//Notify();
}

void Player::setPercentBattleLost()
{
	this->percentBattleLost = 100 * ((this->battleLost) / (this->battleWon + this->battleLost));
	//Notify();
}

void Player::setPercentWorldControlled()
{
	this->percentWorldControlled = (this->totalCountriesControlled / NUMBER_OF_COUNTRIES) * 100;
	//Notify();
}

void Player::CountryControlledIncrement()
{
	this->totalCountriesControlled += 1;
	setPercentWorldControlled();
	Notify();
}

