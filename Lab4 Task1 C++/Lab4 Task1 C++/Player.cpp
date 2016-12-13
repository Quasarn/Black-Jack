#include "Player.h"

#include <iostream>
using namespace std;

Player::Player(void)
{
}


Player::~Player(void)
{
}


void Player::setPoints(int points)
{
	balance = points;
}


void Player::addPoints(int points)
{
	balance += points;
}


void Player::takePoints(int points)
{
	balance -= points;
}