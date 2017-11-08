#ifndef PIECES_H
#define PIECES_H
#include "Players.h"

class Pieces: public Players{
protected:
	int colour;
public:
	void setColour(int c);
	int getColour();
	int getPosition(Players player);

};
#endif