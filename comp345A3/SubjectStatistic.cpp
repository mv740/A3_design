#include "SubjectStatistic.h"
#include "StatisticObserver.h"

SubjectStatistic::SubjectStatistic(){
	statisticObservers = new list<StatisticObserver*>;
}

SubjectStatistic::~SubjectStatistic(){
	delete statisticObservers;
}

void SubjectStatistic::Attach(StatisticObserver* o){
	statisticObservers->push_back(o);
}

void SubjectStatistic::Detach(StatisticObserver* o){
	statisticObservers->remove(o);
}

void SubjectStatistic::Notify(){
	list<StatisticObserver *>::iterator i = statisticObservers->begin();
	for (; i != statisticObservers->end(); ++i)
		(*i)->update();
}