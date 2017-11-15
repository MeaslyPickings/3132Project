//Dice class
//Board has dice (has a relationship)
#include "Dice.h"
#include <random>
#include <iostream>

using namespace std;


Dice:: Dice() {	//default dice with 6 sides
	this->number = 6;
	for (int i = 1; i <= this->number; i++) {
		diceArray.push_back(i);
	}
}

Dice:: Dice(int num) {	//custom dice by players
	if (num >= 1 && num <= 12) {
		this->number = num;
		for (int i = 1; i <= this->number; i++) {
			diceArray.push_back(i);
		}
	}
	else {	//otherwise use default dice
		this->number = 6;
		for (int i = 1; i <= this->number; i++) {
			diceArray.push_back(i);
		}
	}

}

Dice:: ~Dice() { //destructor

}

int Dice::roll(){ //roll the dice and return a random number
	int random = rand() % (this->number); //in the range 0 to (this number-1)
	return this->diceArray[random];
}

void Dice:: print() { //print the result 
	cout << this->roll() << endl;
}