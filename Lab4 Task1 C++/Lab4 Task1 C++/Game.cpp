#include "Game.h"
#include <iostream>

using namespace std;

Game::Game(void)
{
	//??���������
	//??
	//??
}


Game::~Game(void)
{
}


void Game::setPlayerPoints()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ���������� ����� �����:" << endl;
	int points = 0;
	cin >> points;
	player.setPoints(points);
}

void Game::makeRate()//������
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "���� ������:" << endl;
	int rate = 0;
	cin >> rate;
	player.takePoints(rate);
}


void Game::takeWin()
{
	int points  = rate * 2;//????
	player.addPoints(points);
}