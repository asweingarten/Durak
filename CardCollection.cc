#include "CardCollection.h"
#include <stdlib.h>
#include "Card.cc"

//====================================================================
// CardCollection Constructor
CardCollection::CardCollection() {}

//====================================================================
// CardCollection Destructor
CardCollection::~CardCollection() {}

//====================================================================
// Prints out the cards in the collection
void CardCollection::print()
{
	std::cout << "Cards: ";
	for( unsigned int i = 0; i < size(); i++ )
	{
		std::cout << *at(i);
		if( i != size() - 1 )
			std::cout << " :: ";
	}
	std::cout << std::endl;
}

//====================================================================
// Shuffles the cards in the collection
void CardCollection::shuffle()
{
	int n = CARD_COUNT;

	while ( n > 1 ) {
		int k = (int) (lrand48() % n);
		--n;
		Card *c = at(n);
		at(n) = at(k);
		at(k) = c;
	}
}

//====================================================================
void CardCollection::removeCard( Card &removeThis )
{
	int toRemove;
	Card *curCard;
	std::vector<Card*>::iterator iter = this->begin();
	for ( ; iter != this->end(); iter++ )
	{
		curCard = *iter;
		if ( removeThis == *curCard )
		{
			erase( iter, iter+1 );
			break;
		}
	}
}
