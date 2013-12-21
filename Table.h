#ifndef TABLE_H
#define TABLE_H

#include <uC++.h>

#include "CardCollection.h"

_Monitor Table
{
  public:
  	Table( unsigned int lowestCard );
  	~Table();

  private:
  	typedef CardCollection Deck;
  	Deck *deck;
};

#endif