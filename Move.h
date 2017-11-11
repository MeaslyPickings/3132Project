#ifndef MOVE_H
#define MOVE_H

#include"Players.h"
#include"Board.h"
//#include"Pieces.h"

class Move:public Players{
protected:

public:
	Move(int name);
	void startGame();
	bool finished(int position);
	void jump();
	void move(int amount);
	int getPosition();
};
#endif