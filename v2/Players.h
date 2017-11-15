//Players class
//Board has players (has a relationship)
//Player has pieces (has a relationship)
#ifndef PLAYERS_H
#define PLAYERS_H
#include <iostream>
#include <vector>
#include "Pieces.h"
using namespace std;


class Players {
	protected:
		string name;
		int turn; //the order of the players
		const int numPieces = 4; //each player only has 4 pieces
		int nthPiece; //the nth piece
		vector<Pieces> pieceArray; //store all the pieces for a player
	
	public:
		Players();
		Players(string name, int turn);
		~Players();

		void setName(string name);
		string getName();
		void setTurn(int turn);
		int getTurn();
		void print();

		void addPieces(); //add pieces for a player
		Pieces getPieces(int nth); //return the nth piece
		
		

};

#endif