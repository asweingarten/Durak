#include <uC++.h>
#include <iostream>

#include "CardCollection.h"
#include "Table.h"

using namespace std;

void usage( char* argv[] )
{
	cerr << "Usage: " << argv[0]
		 << " 1 < num-players < 6 [ 1 < lowest-card < 7 ]"
		 << endl;

	exit( EXIT_FAILURE );
}

void uMain::main()
{

	unsigned int numPlayers = 2,
				 lowestCard = 6,
				 arg;

	switch( argc )
	{
		case 3:
			arg = atoi( argv[2] );
			if ( arg > 1 && arg < 7 ) lowestCard = arg;
			else usage( argv );

		case 2:
			arg = atoi( argv[1] );
			if ( arg > 1 && arg < 6 ) numPlayers = arg;
			else usage( argv );
			break;

		default:
			break;
	}

	Table  *table   = new Table( lowestCard );

	Player *players = new Player*[numPlayers];
	for ( unsigned int i = 0; i < numPlayers; i++ )
	{
		players[ i ] = new Player( table );
	}

	for ( unsigned int i = 0; i < numPlayers; i++ )
	{
		delete players[ i ];
	}
	delete players;
	delete table;

	// @TODO
	//	- Deal cards
	//	- Create game loop
	//	- Victory Conditions

}