#pragma once
#include "StatisticSubject.h"
#include "Global.h"

//const int NUMBER_OF_COUNTRIES = 10;

class Player : public StatisticSubject
{
public:
	Player();
	~Player();

	//cards ; we will used this to draw card, don't need to make a seperate class because we only need a simple value of how many card the user has 
	bool cardGivenThisTurn;
	void drawCard();
	void resetCardGiven();


	//getter
	int getNbCountriesControlled();
	int getTotalArmy();
	int getTotalCards();
	string getPlayerName();

	//setter
	void setNbCountriesControlled(int newTotal);
	void setTotalArmy(int newTotal);
	void setTotalCards(int newTotal);
	void setPlayerName(string newName);

	//used for decorator 
	double getPercentWorldControlled();
	double getPercentBattleWon();
	double getPercentBattleLost();

	void battleWonIncrement();
	void battleLooseIncrement();
	void CountryControlledIncrement();

private:
	string playerName;
	int totalCountriesControlled;
	int totalArmy;
	int totalCards;

	//used for decorator 
	 

	double percentWorldControlled; 
	double percentBattleWon;
	double percentBattleLost;
	int battleWon;
	int battleLost;

	void setPercentWorldControlled();
	void setPercentBattleWon();
	void setPercentBattleLost();
	

};

