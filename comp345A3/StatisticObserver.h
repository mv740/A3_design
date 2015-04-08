#pragma once
#include "StatisticSubject.h"

//Needs to have a forward reference due to 
//circular reference between Observer and Subject
class StatisticSubject;


//Abstract class for StatisticObserver
class StatisticObserver {
public:
	~StatisticObserver();
	virtual void update() = 0;
	virtual void display() = 0;
protected:
	StatisticObserver();
};
