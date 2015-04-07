#pragma once
#include "StatisticDisplay.h"
#include <iostream>
#include <string>
using namespace std;

StatisticDisplay::StatisticDisplay(){
}

StatisticDisplay::StatisticDisplay(Player* p)
{
	//Upon instantiation, attaches itself to a player
	player = p;
	player->Attach(this);
}

StatisticDisplay::~StatisticDisplay()
{
	//Upon destruction, detaches itself from its player      
	player->Detach(this);
}

void StatisticDisplay::update()
{
	display();
}

//print the info 
void StatisticDisplay::display()
{
	 

	cout << "---------Player Statistic for : " << player->getPlayerName() << "--------" << endl;

	int totalArmy = player->getTotalArmy();
	int totalCards = player->getTotalCards();
	int nbCountriesControl= player->getNbCountriesControlled();
	
	cout << "number of countries controlled : " << nbCountriesControl << endl;
	cout << "total number of armies owned  : " << totalArmy << endl;
	cout << "number of cards owned : " << totalCards << endl;
};
