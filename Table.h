#ifndef TABLE_H
#define TABLE_H

#include <uC++.h>
#include <list>

_Monitor Table
{
  public:
  	Table( unsigned int lowestCard );
  	pickUpCards( std::vector<Card> *hand );
  	~Table();

  private:
  	std::list<Card*> *deck;
};

#endif