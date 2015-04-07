#include "WorldStats.h"
#include <iostream>
using namespace std;

WorldStats::WorldStats(StatisticDisplay *decoratedStatisticDisplay): StatisticDecorator(decoratedStatisticDisplay)
{
	
}


WorldStats::~WorldStats()
{
}

void WorldStats::update()
{
	return StatisticDecorator::update();
}

void WorldStats::display()
{
	StatisticDecorator::display();
	cout << "% of world controlled : " << player->getPercentWorldControlled()  << endl;
}