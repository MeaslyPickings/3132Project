#ifndef MOVE_H
#define MOVE_H

#include"Pieces.h"

class Move:public Pieces{
protected:

public:
	void start(int *start);
	void finish(int *finish);
	void jump();
	void move(int amount);
};
#endif