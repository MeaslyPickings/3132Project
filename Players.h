
#include <iostream>
using namespace std;
#ifndef PLAYERS_H
#define PLAYERS_H
#include "Board.h"

class Players: public Board {
	protected:
		int name; 
		int pointer;
		int turn;
		int pieces;
	public:
		Players();
		Players(int name);

		~Players();

		void setName(int name);
		int getName();
		
		void setPointer(int pointer);
		int getPointer();

		void setTurn(int turn);
		int getTurn();

		void setPieces(int pieces);
		int getPieces();

		bool checkWin();
		void addPlayers();

};

#endif