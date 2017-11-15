//Blocks class
//Board has blocks (has a relationship)
#include "Blocks.h"
#include <iostream>
using namespace std;

Blocks:: Blocks() {	//constructor
	this->index = -1;	//default is -1
	this->color = "W";	//default color is white

}

Blocks:: ~Blocks() { //destructor

}

int Blocks:: getIndex() {	//get method returns the index
	return this->index;
}

void Blocks:: setIndex(int index) {	//set method 
	this->index = index;
}

string Blocks:: getColor() {	//get method returns color
	return this->color;
}

void Blocks:: setColor(string color) {	//set method 
	this->color = color;
}

void Blocks:: print() {
	cout << "Block index: " << this->getIndex() << "\nBlock color: " << this->getColor() << endl;
}

void Blocks:: storePiece(Pieces piece, int index) {
	pieceInBlock.push_back(piece);
}