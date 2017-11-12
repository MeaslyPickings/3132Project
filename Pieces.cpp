#include"Pieces.h"
#include "Players.h"
#include "Board.h"
using namespace std;

Pieces::Pieces(){
	this->amount = 0;
	this->player = 0;
}

Pieces::Pieces(int name){
	this->amount = 4;
	this->player = name;
}
void Pieces::setPlayer(int n){
	this->player = n;
}

int Pieces::getPlayer(){
	return this->player;
}

int Pieces::getAmount(){
	return amount;
}

void Pieces::setAmount(int x){
	this->amount = x;
}
