#pragma once
class Hand
{
private:
	int numberCards;
	int* arrayCards;
public:
	Hand(void);
	~Hand(void);

	void setCard();
	void clearHand();
};

