#pragma once
#include "Player.h"
#include "StatisticObserver.h"

class StatisticDisplay : public StatisticObserver {
public:
	StatisticDisplay();
	StatisticDisplay(Player* p);
	~StatisticDisplay();
	void virtual update();
	void virtual display();
protected:
	Player * player;
};
