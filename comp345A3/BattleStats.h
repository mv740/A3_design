
#pragma once
#include "StatisticDecorator.h"
/*
Decorator that mixe WorldStats with StatisticDisplay
subclass of StatisticDecorator and thus a subclass of StatisticDisplay
*/
class BattleStats : public StatisticDecorator
{
public:
	/*
	When creating a decoratedStatisticDisplay, pass a StatisticDisplay to be decorated as a parameter
	*/
	BattleStats(StatisticDisplay *decoratedStatisticDisplay);
	~BattleStats();

	void update();
	void display();
};

