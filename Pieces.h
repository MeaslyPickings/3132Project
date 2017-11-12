#ifndef PIECES_H
#define PIECES_H
//#include "Players.h"

class Pieces {
protected:
	int player;
	int amount;
public:
	Pieces(int name);
	void setPlayer(int n);
	int getPlayer();
	int getAmount();
	void setAmount(int x);

};
#endif