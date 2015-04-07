
#include "BattleStats.h"
#include <iostream>
using namespace std;

BattleStats::BattleStats(StatisticDisplay *decoratedStatisticDisplay) : StatisticDecorator(decoratedStatisticDisplay)
{
	
}


BattleStats::~BattleStats()
{
}

void BattleStats::update()
{
	return StatisticDecorator::update();
}

void BattleStats::display()
{
	StatisticDecorator::display();
	cout << "% of battles won : " << player->getPercentBattleWon() << endl;
	cout << "% of battles lost : " << player->getPercentBattleLost() << endl;
}