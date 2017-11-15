//Board class
#include "Board.h"
#include <iostream>
using namespace std;

Board:: Board() {
	this->size = 16; //the size of the board
}

Board:: ~Board() {	//destructor

}

void Board:: addBlockOnBoard() {	//add a block in board(block vector)
	for (int i = 0; i < size; i++) {
		Blocks block;	//initialize a block
		block.setIndex(i);	//set the index of the block
		blockArray.push_back(block);	//add the block into board(block vector)
	}
}

Blocks Board:: getBlock(int index) {	//get the block on the board
	return blockArray.at(index);
}

void Board:: print() {
	for (int i = 8; i < 13; i++) {
		cout << "|" << blockArray.at(i).getColor() << "|";	//change to block.getShape()
	}
	cout << endl;
	int k = 6;
	for (int j = 7; j > 4; j--) {
		cout << "|" << blockArray.at(j).getColor() << "|" << "\t    " 
		<< "|" << blockArray.at(j+k).getColor() << "|" << endl;
		k += 2;
	}
	for (int l = 4; l >= 0; l--) {
		cout << "|" << blockArray.at(l).getColor() << "|";
	}
	cout << endl;
}

void Board:: addPlayers(Players player) {
	if (playerArray.size() <= this->numPlayer) {
		playerArray.push_back(player);
	}
	else {
		cout << "Full Player. Can't add new player." << endl;
	}
}

void Board:: setPlayersOrder() {	//set the order of all players
	if (playerArray.size() != 0  && playerArray.size() <= this->numPlayer) {
		for (int i = 0; i < playerArray.size(); i++) {
			playerArray.at(i).setTurn(i);
		}
	}
	else {
		cout << "No players in the game now. Please add new player." << endl;
	}
}

// void Board:: setPosition(Block block, Players player) {	//set the piece's position on the block
// 	if (player.getTurn() == 1) {
// 		storePieces(player.getPieces(1))
// 		player.getPieces(1).
// 		player.getPieces(1).
// 		player.getPieces(1).
// 	}
// 	else if (player.getTurn() == 2) {

// 	}
// 	else if (player.getTurn() == 3) {

// 	}
// 	else if (player.getTurn() == 4) {

// 	}
// 	else {
// 		cout << "Player's turn is wrong. Please check." << endl;
// 	}
// }






