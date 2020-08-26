/*************************************************************************
 * Program Name:		-- Dice War --
 * Author: Gabriel Rice
 * Date: 4/21/18
 * Description:			-- main.cpp --
 * 
 * This is the main method for the dice war game program.
 * **********************************************************************/

#include "LoadedDie.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int numRounds;
	int numSides1;
	int numSides2;
	int regRoll1;
	int regRoll2;
	int LRoll1;
	int LRoll2;
	int p1Points;
	int p2Points;

	Game g;
	Die d;
	LoadedDie ld;

	//Call start menu to collect all data from user
	g.startMenu();

	//get number of rounds from Game
	numRounds = g.getNumRounds();
	for (int i= 1; i <= numRounds; i++)
    {



        /******************Player 1*********************************/

		//get number of sides from Game
		numSides1 = g.getNumSides1();//For player 1

		//send num sides to random number generator
		d.setRoll(numSides1);//for player 1
		regRoll1 = d.regularDieRoll();
		
		//send num sides to Loaded random num gen	
		ld.setRoll(numSides1);
		LRoll1 = ld.regularDieRoll();//for loaded die option

		/**********************Player 2********************************/

		//get number of sides from Game
		numSides2 = g.getNumSides2();

		//send num sides to random number generator
		d.setRoll(numSides2);
		regRoll2 = d.regularDieRoll();
	
		//send num sides to Loaded random num gen
		ld.setRoll(numSides2);
		LRoll2 = ld.regularDieRoll();

		/**************************************************************/

		//get the number of rounds from Game
		numRounds = g.getNumRounds();

		cout << "__________________________________" << endl;
        cout << "\n            **  Round " << i << " **" << endl;
		g.playGame(regRoll1, LRoll1, regRoll2, LRoll2);

	}

	//get the points from Game
	p1Points = g.getP1Points();
	p2Points = g.getP2Points();

	//display the results of the end of the game
	cout << "__________________________________\n" << endl;
	cout << "\tPlayer 1 earned " << p1Points << " points.\n" << endl;
	cout << "\tPlayer 2 earned " << p2Points << " points.\n" << endl;
	if (p1Points > p2Points)
    {
        cout << "\n\t\t**** Player 1 won the game!!! ****\n" << endl;
    }

    else if (p1Points < p2Points)
    {
        cout << "\n\t\t**** Player 2 won the game!!! ****\n" << endl;
    }

	return 0;
}
