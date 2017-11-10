#include "Players.h"
#include <iostream>

Players:: Players() {
	this->name = 0;
	this->turn = 0;
	this->pieces = 4;
}

Players:: Players(int name) {
	this->name = name;
	if(name == 1){
		start = 2;
		finish = 1;
	}
	if(name == 2){
		start = 6;
		finish = 5;
	}
	if(name == 3){
		start = 10;
		finish = 9;
	}
	if(name == 4){
		start = 14;
		finish = 13;
	}
}

Players:: ~Players() {

}

void Players:: setName(int name) {
	this->name = name;
}

int Players:: getName() {
	return this->name;
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

int Players::getStart(){
	return start;
}
int Players::getFinish(){
	return finish;
}


