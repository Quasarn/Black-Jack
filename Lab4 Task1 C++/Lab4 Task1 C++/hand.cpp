#include "Hand.h"


Hand::Hand(void)
{
	numberCards = 0;
	arrayCards = new int[11];
}


Hand::~Hand(void)
{
	delete []arrayCards;
}


void Hand::setCard()
{
}


void Hand::clearHand()
{
	for(int i = 0; i < 11; ++i)
	{
		*(arrayCards + i) = 0;
	}
}