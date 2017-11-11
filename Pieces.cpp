#include"Pieces.h"

using namespace std;


void Pieces::setColour(int c){
	this->colour = c;
}

int Pieces::getColour(){
	return this->colour;
}

int Pieces::getPosition(Players player) {
	int position = -1;
	for (int i = 0; i < 16; i++) {
		if (array[i] == player.getPieces() && 
			player.getName() == player.getPieces()) {
			position = array[i];
		}
	}
	return position;
}