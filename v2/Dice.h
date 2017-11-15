//Dice class
//Board has dice (has a relationship)
#ifndef DICE_H
#define DICE_H
#include <vector>
using namespace std;

class Dice{
	public:
		int number;
		vector<int> diceArray;
	
		Dice();
		Dice(int num);
		~Dice();
		int roll();
		void print();
};

#endif