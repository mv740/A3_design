#include "StatisticSubject.h"
#include "StatisticObserver.h"

StatisticSubject::StatisticSubject(){
	statisticObservers = new list<StatisticObserver*>;
}

StatisticSubject::~StatisticSubject(){
	delete statisticObservers;
}

void StatisticSubject::Attach(StatisticObserver* o){
	statisticObservers->push_back(o);
}

void StatisticSubject::Detach(StatisticObserver* o){
	statisticObservers->remove(o);
}

void StatisticSubject::Notify(){
	list<StatisticObserver *>::iterator i = statisticObservers->begin();
	for (; i != statisticObservers->end(); ++i)
		(*i)->update();
}