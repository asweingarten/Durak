#include "Table.h"

Table::Table( unsigned int lowestCard )
{
	for ( unsigned int i = 0; i < SUIT_COUNT; i++ )
	{
		for ( unsigned int j = lowestCard; j < RANK_COUNT; j++ )
		{
			deck.push_back( new Card( (Suit)i, (Rank)j ) );
		}
	}

	shuffleDeck();

	topCard = deck.begin();
}

void Table::pickUpCards( std::vector<Card> *hand )
{
	while ( hand->size() < 6 )
	{
		if ( topCard == deck.end() )		// Things will need to be done on this
			break;
		else
		{
			hand->push_back( **topCard );
			topCard++;
		}
	}
}

Table::~Table()
{
	deck.clear();
}

void Table::shuffleDeck()
{
	std::vector<Card*> temp( deck.begin(), deck.end() );
	std::random_shuffle( temp.begin(), temp.end() );	// random_shuffle does not work on lists

	for ( unsigned int i = 0; i < temp.size(); i++ )
	{
		deck.pop_back();
		deck.push_front( temp.back() );
		temp.pop_back();
	}
}

