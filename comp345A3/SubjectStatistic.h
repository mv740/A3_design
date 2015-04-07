#pragma once
#include "StatisticObserver.h"
#include <list>
using namespace std;

//Needs to have a forward reference due to 
//circular reference between Observer and Subject
class StatisticObserver;

class SubjectStatistic {
public:
	virtual void Attach(StatisticObserver* o);
	virtual void Detach(StatisticObserver* o);
	virtual void Notify();
	SubjectStatistic();
	~SubjectStatistic();

private:
	list<StatisticObserver*> * statisticObservers;
};
