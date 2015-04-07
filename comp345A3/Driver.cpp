#include "Player.h"
#include "StatisticDisplay.h"
#include "WorldStats.h"
#include "BattleStats.h"
#include "Country.h"
#include "Battle.h"
#include <iostream> 
using namespace std;


int main()
{
	Country world[5]
	{
	Country("canada", "Player A", 10),
	Country("canada", "Player B", 1),
	Country("canada", "Player B", 15),
	Country("canada", "Player B", 10),
	Country("canada", "Player C", 10)
	};


	Player *player1 = new Player;

	StatisticDisplay *stat = new StatisticDisplay(player1);
	
	//setting name
	player1->setPlayerName("Player A");

	

	Battle risk;

	risk.fight(player1, world[0], world[1]);

	stat = new BattleStats(stat);
	cout << "------------------------------------------------------\n" << endl;
	//stat->display();


	//TODO: fix decorator   player become null after being wrapped  ; after stat = new BattleStats(stat)   player = null!!! 


	Player *player2 = new Player;
	StatisticDisplay *stat1 = new StatisticDisplay(player2);
	player2->setPlayerName("decorator test");
	stat1 = new BattleStats(stat1);
	//stat1 = new WorldStats(stat1);
	//stat = new WorldStats(stat);
	risk.fight(player2, world[0], world[2]);
	stat1->display();
	//stat->display();

	//risk.fight(player1, world[0], world[3]);
	//stat = new BattleStats(stat);
	//stat->display();
	
	system("PAUSE");
	return EXIT_SUCCESS;

}