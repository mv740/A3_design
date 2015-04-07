#include "StatisticDecorator.h"


StatisticDecorator::StatisticDecorator(StatisticDisplay *decoratedStatisticDisplay)
{
	this->decoratedStatisticDisplay = decoratedStatisticDisplay;
}


StatisticDecorator::~StatisticDecorator()
{
}

void StatisticDecorator::display()
{
	return decoratedStatisticDisplay->display();
}

void StatisticDecorator::update()
{
	return decoratedStatisticDisplay->update();
}
