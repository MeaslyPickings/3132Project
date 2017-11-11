
#include <iostream>
using namespace std;
#ifndef PLAYERS_H
#define PLAYERS_H
#include "Board.h"

class Players:public Board {
	protected:
		int name; 
		int start;
		int finish;
		int turn;
		int pieces;
	public:
		Players();
		Players(int name);

	

		void setName(int name);
		int getName();
		
	
		int getStart();
		int getFinish();

		void setTurn(int turn);
		int getTurn();

		void setPieces(int pieces);
		int getPieces();

		bool checkWin();
		void addPlayers();

		void print();

		virtual int roll(){};
		virtual void move(int amount){};
		virtual void startGame(){};
		virtual bool finished(int num){};


};

#endif