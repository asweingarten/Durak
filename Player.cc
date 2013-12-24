#include "Player.cc"

Player::Player( unsigned int id, Table &table ) :
				table( &table ), id( id ), hand( new CardCollection() )
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