
#ifndef BOARD_H
#define BOARD_H
#include "Players.h"

class Board {
	protected:
		int *array;
		int size;
		Players *player1;
		Players *player2;
		Players *player3;
		Players *player4;
	public:
		Board();
		Board(Players p1,Players p2);
		Board(Players p1,Players p2,Players p3);
		Board(Players p1,Players p2,Players p3,Players p4);
		~Board();
		void addPlayer(Players p,int i);
		int getPosition(Players p);
		void startGame(Players p);
		bool isFinished(Players p);
		bool jump(int newIndex);
		void move(Players p);

		void print();
};


#endif