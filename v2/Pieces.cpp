//Pieces class
//Player has pieces (has a relationship)
#include"Pieces.h"
#include <iostream>
using namespace std;

Pieces:: Pieces() {
	this->color = "W"; //set default color to white(W)
	this->shape = "N"; //set the default shape to normal(N)
}

Pieces:: Pieces(string color, string shape) {
	this->color = color;
	this->shape = shape;
}

Pieces:: ~Pieces() {

}

void Pieces:: setColor(int color){	//set the color of a piece
	this->color = color;
}

string Pieces:: getColor(){	//return the color of a piece
	return this->color;
}

void Pieces:: setShape(string shape) { //set the shape of a piece
	this->shape = shape;
}

string Pieces:: getShape() {	//return the shape of a piece
	return this->shape;
}

void Pieces:: print() {	//print the piece
	cout << "Piece's color: " << this->getColor() << "\nPiece's shape: " <<this->getShape() << endl;
}
