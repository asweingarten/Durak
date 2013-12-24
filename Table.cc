#include "Table.h"

Table::Table( unsigned int lowestCard ) : deck( new std::list<Card*>() )
{
	for ( unsigned int i = 0; i < SUIT_COUNT; i++ )
	{
		for ( unsigned int j = lowestCard; j < RANK_COUNT; j++ )
		{
			deck->push_back( new Card( (Suit)i, (Rank)j ) );
		}
	}
}

void Table::pickUpCards( std::vector<Card> *hand )
{
	// while ( hand.size() < 6 )
	// {
	// 	if ( deck.size() == 0 )		// Things will need to be done on this
	// 		break;
	// 	// else
	// 	// 	hand.push_back(  )
	// }
}

Table::~Table()
{
	delete deck;
}

