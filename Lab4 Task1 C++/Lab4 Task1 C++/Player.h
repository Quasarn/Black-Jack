#pragma once

class Player
{
private:
	int balance;
public:
	Player(void);
	~Player(void);

	void setPoints(int points);
	void addPoints(int points);
	void takePoints(int points);
};

