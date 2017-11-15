//Players class
//Board has players (has a relationship)
//Player has pieces (has a relationship)
#include "Players.h"
#include <iostream>
using namespace std;

Players:: Players() {
	this->name = "";
	this->turn = -1; //-1 by default
	this->nthPiece = -1; //-1 by default
}

Players:: Players(string name, int turn) {
	this->name = name;
	this->turn = turn;
	
}

Players:: ~Players() {

}

void Players:: setName(string name) {	//set the name of player
	this->name = name;
}

string Players:: getName() {	//return the name of player
	return this->name;
}

void Players:: setTurn(int turn) {	//set the turn of player
	this->turn = turn;
}

int Players:: getTurn() {	//return the name of player
	return this->turn;
}

void Players:: print() {	//print the name and turn of the player
	cout << "Player's name: " << this->getName() << "\nPlayer's turn" << this->getTurn() << endl;
}

void Players:: addPieces() {	//player can add pieces before the game starts
	if (pieceArray.size() <= numPieces) {
		Pieces p = Pieces(); //initialized a piece object
		pieceArray.push_back(p);	//store a piece for the player
	}
	else {
		cout << "Full. Can't add new piece." << endl;
	}
}

Pieces Players:: getPieces(int nth) {	//start form 0th
	return pieceArray.at(nth);
}






