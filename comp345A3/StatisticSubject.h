//Observable
#pragma once
#include "StatisticObserver.h"
#include <list>
using namespace std;

//Needs to have a forward reference due to 
//circular reference between Observer and Subject
class StatisticObserver;

class StatisticSubject {
public:
	virtual void Attach(StatisticObserver* o);
	virtual void Detach(StatisticObserver* o);
	virtual void Notify();
	//StatisticSubject();
	~StatisticSubject();

protected:
	StatisticSubject();

private:
	list<StatisticObserver*> * statisticObservers;
};
