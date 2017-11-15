//Blocks class
//Board has blocks (has a relationship)
#ifndef BLOCKS_H
#define BLOCKS_H
#include "Pieces.h"
#include <iostream>
#include <vector>
using namespace std;

class Blocks {
	protected:
		int index;	//the block's position on a board
		string color;	//the color of the block
		vector<Pieces> pieceInBlock; //store an array in a vector
	public:
		Blocks();
		~Blocks();

		int getIndex();
		void setIndex(int index);
		string getColor();
		void setColor(string color);
		void print();

		void storePiece(Pieces piece);

		
};

#endif