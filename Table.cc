#include "Table.h"

Table::Table( unsigned int lowestCard ) : deck( new CardCollection() )
{
	for ( unsigned int i = 0; i < SUIT_COUNT; i++ )
	{
		for ( unsigned int j = lowestCard; j < RANK_COUNT; j++ )
		{
			deck->push_back( new Card( (Suit)i, (Rank)j ) );
		}
	}

	deck->print();
}

Table::~Table()
{
	delete deck;
}

