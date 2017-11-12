
#ifndef PLAYERS_H
#define PLAYERS_H
#include <iostream>
using namespace std;
#include "Pieces.h"

class Players {
	protected:
		int name; 
		int start;
		int finish;
		int turn;
		bool placeBack = false;
		Pieces *p;
		//Board *b;
	public:
		Players();
		Players(int name);
		

		void setName(int name);
		int getName();
		
	
		int getStart();
		int getFinish();

		void setTurn(int turn);
		int getTurn();

		void setPieces(Pieces p);
		Pieces getPieces();

		bool checkWin();
		void addPlayers();

		void setPlaceBack(bool i);
		bool getPlaceBack();

		void print();


};

#endif