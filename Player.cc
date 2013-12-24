#include "Player.h"

#include "Table.h"

Player::Player( unsigned int id, Table &table ) :
				table( &table ), id( id ), hand( new std::vector<Card>() )
{

}

void Player::main()
{
	table->pickUpCards( hand );

	while ( true )
	{
		break;
	}
}