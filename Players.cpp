
#include "Players.h"
#include <iostream>

Players:: Players() {
	this->name = 0;
	this->pointer = 0;
	this->turn = 0;
	this->pieces = 4;
}

Players:: Players(int name) {
	this->name = name;
	this->pointer = pointer;
	this->turn = turn;
	this->pieces = pieces;
}

Players:: ~Players() {

}

void Players:: setName(int name) {
	this->name = name;
}

int Players:: getName() {
	return this->name;
}
		
void Players:: setPointer(int pointer) {
	this->pointer = pointer;
}

int Players:: getPointer() {
	return this->pointer;
}

void Players:: setTurn(int turn) {
	this->turn = turn;
}

int Players:: getTurn() {
	return this->turn;
}

void Players:: setPieces(int pieces) {
	this->pieces = pieces;
}

int Players:: getPieces() {
	return this->pieces;
}

bool Players:: checkWin() {
	if (this->getPieces() == 0) {
		return true;
	}
	else {
		return false;
	}
}

void Players:: addPlayers() {
	
}


