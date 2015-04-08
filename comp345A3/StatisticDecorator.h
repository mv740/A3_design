#pragma once
#include "StatisticDisplay.h"


class StatisticDecorator : public StatisticDisplay
{

protected:
	

private:
	StatisticDisplay *decoratedStatisticDisplay;
	//Player *player; 
	

public:
	/*
		wrap statistic object inside a object of one of StatisticDecorator's subsclasse
	*/
	StatisticDecorator(StatisticDisplay *decoratedStatisticDisplay);
	~StatisticDecorator();

	/*
		Provide the wrapper with the StatisticDisplay interface and 
		delegates its method to the wrapped StatisticDisplay object
	*/
	virtual void display();
	virtual void update();

};

