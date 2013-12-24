#ifndef PLAYER_H
#define PLAYER_H

#include <uC++.h>
#include <vector>

_Monitor Table;

_Task Player
{
  public:
  	Player( unsigned int id, Table &table );

  private:
  	void main();

  	unsigned int id;
  	Table *table;
  	std::vector<Card> *hand;

};

#endif