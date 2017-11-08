#ifndef DICE_H
#define DICE_H
#include"Players.h"

class Dice:public Players{
protected:
	int number[6] = {1,2,3,4,5,6};
public:
	int roll();
};
#endif