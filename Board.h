
#include "Players.h"
#ifndef BOARD_H
#define BOARD_H

class Board {
	protected:
		int *array;
		int size;
	public:
		Board();
		~Board();
		void add(int i, int e);
		// void addPlayer(Player p);

		void print();
};


#endif