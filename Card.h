#ifndef CARD_H
#define CARD_H

#define CARD_COUNT 36

#include <vector>
#include <string>
#include <iostream>

enum Suit
{
	DIAMONDS, HEARTS, CLUBS, SPADES, SUIT_COUNT
};

enum Rank
{
	TWO=2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE, RANK_COUNT,
};

struct Card
{
	Card( Suit s, Rank r ) : suit( s ), rank( r ) {}

	std::string toString() const
	{
		std::string suits[SUIT_COUNT] = {"D", "H", "C", "S"};
		std::string ranks[RANK_COUNT] = {"2", "3", "4", "5", "6",
			"7", "8", "9", "10", "J", "Q", "K", "A"};
		std::string cardString = "";

		cardString += ranks[ rank - 2 ];
		cardString += suits[ suit ];
		return cardString;
	}

	Suit suit;
	Rank rank;
};

bool operator==( const Card&, const Card& ); // Two cards are equal if their ranks are equal
bool operator!=( const Card&, const Card& );
bool operator> ( const Card&, const Card& );
bool operator>=( const Card&, const Card& );
bool operator< ( const Card&, const Card& );
bool operator<=( const Card&, const Card& );

std::ostream& operator<<( std::ostream&, const Card&);

#endif
