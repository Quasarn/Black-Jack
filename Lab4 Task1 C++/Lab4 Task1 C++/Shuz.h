#pragma once
class Shuz
{
private:
	int numCardsDeck1;
	int numCardsDeck2;
	int numCardsDeck3;
	int numCardsDeck4;

	int outCards;

	int** deck1;
	int** deck2;
	int** deck3;
	int** deck4;
public:
	Shuz(void);
	~Shuz(void);

	void makeShuz();
	void getCard();
	void writeDeck();
};

