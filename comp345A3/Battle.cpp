#include "Battle.h"
#include <iostream>
using namespace std;

Battle::Battle()
{
}


Battle::~Battle()
{
}

void Battle::fight(Player *player, Country attacker, Country defender)
{
	int attack = attacker.getArmy();
	int defense = defender.getArmy();

	if (attack <= defense)
	{
		//defense won 
		attacker.setArmy(attacker.getArmy() - 1);
		cout << " attacker lost " << endl;
		player->battleLooseIncrement();
	}
	else
	{
		defender.setArmy(defender.getArmy() - 1);
		cout << " attacker won battle!" << endl;
		player->battleWonIncrement();
		if (!player->cardGivenThisTurn)
		{
			//if user has not draw any card this turn then he must draw one
			player->drawCard();
		}

		if (defender.getArmy() == 0)
		{
			defender.setOwner(attacker.getOwner());
			player->CountryControlledIncrement();
		}
	}
	
}