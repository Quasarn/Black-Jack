#include "Game.h"
#include <iostream>

using namespace std;

Game::Game(void)
{
	//??агрегация
	//??
	//??
}


Game::~Game(void)
{
}


void Game::setPlayerPoints()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите количество ваших очков:" << endl;
	int points = 0;
	cin >> points;
	player.setPoints(points);
}

void Game::makeRate()//ставка
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Ваша ставка:" << endl;
	int rate = 0;
	cin >> rate;
	player.takePoints(rate);
}


void Game::takeWin()
{
	int points  = rate * 2;//????
	player.addPoints(points);
}