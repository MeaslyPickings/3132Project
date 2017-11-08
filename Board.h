
#ifndef BOARD_H
#define BOARD_H

class Board {
	protected:
		int *array;
		int size;
	public:
		Board();
		~Board();
		void print();
};


#endif