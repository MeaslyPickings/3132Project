//Pieces class
//Player has pieces (has a relationship)

#ifndef PIECES_H
#define PIECES_H
#include <iostream>
using namespace std;

class Pieces {
	protected:
		string color;
		string shape; //kinds of pieces can be choosen by players
	public:
		Pieces();
		Pieces(string color, string shape);
		~Pieces();

		void setColor(int color);
		string getColor();
		void setShape(string shape);
		string getShape();
		void print();
};

#endif