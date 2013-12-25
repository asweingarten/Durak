#ifndef TABLE_H
#define TABLE_H

#include <uC++.h>
#include <list>
#include <algorithm>
#include <vector>
#include <cstdlib>

#include "MPRNG.h"
#include "Card.h"

extern MPRNG randGenerator;

_Monitor Table
{
  public:
  	Table( unsigned int lowestCard );
  	~Table();

  	void pickUpCards( std::vector<Card> *hand );

  private:
  	std::list<Card*> deck;
  	std::list<Card*>::iterator topCard;

  	void shuffleDeck();
};

#endif