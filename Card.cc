#include "Card.h"


//====================================================================
// Helper method for ostream override
std::string Card::toString() const
{
	std::string suits[SUIT_COUNT] = {"D", "H", "C", "S"};
	std::string ranks[RANK_COUNT] = {"2", "3", "4", "5", "6",
		"7", "8", "9", "10", "J", "Q", "K", "A"};
	std::string cardString = "";

	cardString += ranks[ rank - 2 ];
	cardString += suits[ suit ];
	return cardString;
}

//====================================================================
bool operator==( const Card& leftCard, const Card& rightCard )
{
	return ( leftCard.rank == rightCard.rank ) && ( leftCard.suit == rightCard.suit );
}

//====================================================================
bool operator!=( const Card& leftCard, const Card& rightCard)
{
	return !(leftCard == rightCard);
}

//====================================================================
bool operator> ( const Card& leftCard, const Card& rightCard )
{
	return leftCard.rank > rightCard.rank;
}

//====================================================================
bool operator>=( const Card& leftCard, const Card& rightCard )
{
	return leftCard > rightCard || leftCard == rightCard;
}

//====================================================================
bool operator< ( const Card& leftCard, const Card& rightCard )
{
	return !( leftCard >= rightCard );
}

//====================================================================
bool operator<=( const Card& leftCard, const Card& rightCard)
{
	return !( leftCard > rightCard);
}

//====================================================================
std::ostream& operator<<( std::ostream& out, const Card& card )
{
	out << card.toString();
	return out;
}
