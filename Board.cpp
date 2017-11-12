#include "Board.h"
#include <iostream>
using namespace std;

Board:: Board(Players p1,Players p2) {
	this->player1 = &p1;
	this->player2 = &p2;
	this->size = 16;
	array = new Pieces[size];
	for (int i = 0; i < size; i++) {
		array[i].setPlayer(0);
	}
}

Board:: Board(Players p1,Players p2,Players p3) {
	this->player1 = &p1;
	this->player2 = &p2;
	this->player3 = &p3;
	this->size = 16;
	array = new Pieces[size];
	for (int i = 0; i < size; i++) {
		array[i].setPlayer(0);
	}
}
Board:: Board(Players p1,Players p2,Players p3,Players p4) {
	this->player1 = &p1;
	this->player2 = &p2;
	this->player3 = &p3;
	this->player4 = &p4;
	this->size = 16;
	array = new Pieces[size];
	for (int i = 0; i < size; i++) {
		array[i].setPlayer(0);
	}
}

Board:: ~Board() {

}

Players Board::findPlayer(int name){
	if(player1->getName() == name){
		return *player1;
	}
	if(player2->getName() == name){
		return *player2;
	}
	if(player3->getName() == name){
		return *player3;
	}
	if(player4->getName() == name){
		return *player4;
	}
}
int Board::getPosition(Players p){
	int position = -1;
	for (int i = 0; i <= 15; i++) {
		if (array[i].getPlayer() == p.getPieces().getPlayer()) {
			position = i;
		}
	}
	return position;
}
void Board::addPlayer(Players p,int i) {
	this->array[i].setPlayer(p.getName());
}


bool Board::isFinished(Players p){
	if(p.getPieces().getAmount() == 0){
		return true;
	}
	return false;
}

bool Board::jump(int newIndex){
	if(array[newIndex].getPlayer() != 0){
		return true;
	}
	return false;

}

void Board::move(Players p,int roll){

	int oldPos = this->getPosition(p);
	cout<<"OLDPOS: "<<oldPos<<endl;
	int newPos = (oldPos + roll);
	cout<<"newPos: "<<newPos<<endl;
	array[oldPos] = 0;	
	if(newPos > 15){
		newPos = newPos - 16;
		p.setPlaceBack(true);
		if(this->jump(newPos)){
			Players jumped = this->findPlayer(array[newPos].getPlayer());
			int restart = jumped.getStart();
			cout<<"Player "<<p.getName()<<" jumped Player "<<jumped.getName()<<", Player "<<jumped.getName()<<" is back at start!!!"<<endl;
			this->startGame(jumped);
			jumped.setPlaceBack(false);
			this->addPlayer(p,newPos);	
		}
		else{
			this->addPlayer(p,newPos);
		}
	}
	if(p.getPlaceBack() && newPos >= p.getFinish()){
		int left = p.getPieces().getAmount() - 1;
		p.getPieces().setAmount(left);
		
		if(this->isFinished(p)){
			cout<<"YOU WINNN!!!"<<endl;
		}
		
		else{
			cout<<"Player "<<p.getName()<<" your piece made it around the board!! You have "<<p.getPieces().getAmount()<<" pieces left!!"<<endl;
			cout<<"Your next piece is now placed on your start block"<<endl;
			this->startGame(p);
		}
	}
	if(this->jump(newPos)){
		Players jumped = this->findPlayer(array[newPos].getPlayer());
		int restart = jumped.getStart();
		cout<<"Player "<<p.getName()<<" jumped Player "<<jumped.getName()<<", Player "<<jumped.getName()<<" is back at start!!!"<<endl;
		this->startGame(jumped);
		jumped.setPlaceBack(false);
		this->addPlayer(p,newPos);
	
	}
	else{
		this->addPlayer(p,newPos);
	}

}

void Board::startGame(Players p){
	int start = p.getStart();
	this->addPlayer(p,start);
}


void Board:: print() {
	for (int i = 8; i < 13; i++) {
		if(array[i].getPlayer() == 0){
			cout << "|   |";
		}
		else{
			cout << "| " << array[i].getPlayer() << " |";
		}
	}
	cout << endl;
	int k = 6;
	for (int j = 7; j > 4; j--) {
		if(array[j].getPlayer() == 0 && array[j+k].getPlayer() == 0){
			cout<<"|   |\t\t    |   |"<<endl;
		}
		if(array[j].getPlayer() != 0 && array[j+k].getPlayer() !=0){
			cout<<"| "<<array[j].getPlayer()<<" |\t\t    | "<<array[j+k].getPlayer()<<" |"<<endl;
		}
		if(array[j].getPlayer() !=0 && array[j+k].getPlayer() == 0){
			cout<<"| "<<array[j].getPlayer()<<" |\t\t    |   |"<<endl;
		}
		if(array[j].getPlayer() == 0 && array[j+k].getPlayer() !=0) {
			cout<<"|   |\t\t    | "<<array[j+k].getPlayer()<<" |"<<endl;
		}
		/*cout << "|" << (array[j] == 0?" ":array[j])<< "|" << "\t    " 
		<< "|" << (array[j+k] == 0?" ":array[j+k]) << "|" << endl;*/
		k += 2;
	}
	for (int l = 4; l >= 0; l--) {
		if(array[l].getPlayer() == 0){
			cout<<"|   |";
		}
		else{
			cout << "| " << array[l].getPlayer() << " |";
		}
	}
	cout << endl;
}
