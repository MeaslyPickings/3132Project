#include "Dice.h"
#include<random>

using namespace std;

int Dice::roll(){
	int random = rand()%6;
	return number[random];
}