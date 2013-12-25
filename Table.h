#ifndef TABLE_H
#define TABLE_H

#include <uC++.h>
#include <list>

#include "Card.h"

_Monitor Table
{
  public:
  	Table( unsigned int lowestCard );
  	~Table();

  	void pickUpCards( std::vector<Card> *hand );

  private:
  	std::list<Card*> deck;
  	std::list<Card*>::iterator topCard;
};

#endif