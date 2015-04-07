#pragma once
#include "Player.h"
#include "Country.h"

class Battle
{
public:
	Battle();
	~Battle();

	void fight(Player* player, Country attacker, Country defender);
};
