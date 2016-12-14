#pragma once
#include "Shuz.h"
#include "Player.h"
#include "Dealer.h"

class Game
{
private:
	int rate;//ставка
	Shuz shuz;
	Player player;
	Dealer dealer;
	
public:
	Game(void);
	~Game(void);

	void setPlayerPoints();
	void makeRate();
	void takeWin();
};

