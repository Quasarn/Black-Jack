#include "Player.h"

#include <iostream>
using namespace std;

Player::Player(void)
{
}


Player::~Player(void)
{
}


void Player::setPoints()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ���������� ����� �����: " << endl;
	cin >> points;
}