#include "Player.h"

#include "Table.h"

Player::Player( unsigned int id, Table &table ) :
				table( &table ), id( id ), hand( new std::vector<Card>() )
{

}

void Player::main()
{
	table->pickUpCards( hand );

	printHand();

	while ( true )
	{
		break;
	}
}

void Player::printHand()
{
	for ( unsigned int i = 0; i < hand->size(); i++ )
		std::osacquire( std::cout ) << hand->at( i ).toString() << " ";

	std::osacquire( std::cout ) << std::endl;
}