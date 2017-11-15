//Board class
#ifndef BOARD_H
#define BOARD_H
#include "Blocks.h"
#include "Dice.h"
#include "Players.h"
#include <vector>
#include <iostream>
using namespace std;


class Board {
	protected:
		int size;	//the size of the board
		vector<Blocks> blockArray;	//a board is made up by blocks
		const int numPlayer = 4; //by default
		vector<Players> playerArray;	//store players in the game
		
	public:
		Board();
		~Board();

		void addBlockOnBoard();	//create a board (made up by blocks)
		Blocks getBlock(int index);	//get the block on the board
		void print();	//print the board

		void addPlayers(Players player); //add Player to the board
		void setPlayersOrder(); //set the order of all players

		// void setPosition(Players player); //set a piece's position on a block


		void move();
};


#endif