#ifndef PLAYER_H
#define PLAYER_H

#include <uC++.h>
#include <vector>
#include <iostream>

#include "Card.h"

_Monitor Table;

_Task Player
{
  public:
  	Player( unsigned int id, Table &table );

  private:
  	void main();
  	void printHand();

  	unsigned int id;
  	Table *table;
  	std::vector<Card> *hand;

};

#endif