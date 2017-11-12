#include "Board.h"
#include <iostream>
using namespace std;

Board:: Board(Players p1,Players p2) {
	this->player1 = &p1;
	this->player2 = &p2;
	this->size = 16;
	array = new int[size];
	for (int i = 0; i < size; i++) {
		array[i] = 0;
	}
}

Board:: Board(Players p1,Players p2,Players p3) {
	this->player1 = &p1;
	this->player2 = &p2;
	this->player3 = &p3;
	this->size = 16;
	array = new int[size];
	for (int i = 0; i < size; i++) {
		array[i] = 0;
	}
}
Board:: Board(Players p1,Players p2,Players p3,Players p4) {
	this->player1 = &p1;
	this->player2 = &p2;
	this->player3 = &p3;
	this->player4 = &p4;
	this->size = 16;
	array = new int[size];
	for (int i = 0; i < size; i++) {
		array[i] = 0;
	}
}

Board:: ~Board() {

}
int Board::getPosition(Players p){
	int position = -1;
	for (int i = 0; i < 16; i++) {
		if (array[i] == p.getPieces().getPlayer()) {
			position = array[i];
		}
	}
	return position;
}
void Board::addPlayer(Players p,int i) {
	array[i] = p.getName();
}


bool Board::isFinished(Players p){

}

bool Board::jump(int newIndex){

}

void Board::move(Players p){
	int oldPos;
}

void Board::startGame(Players p){
	int start = p.getStart();
	this->addPlayer(p,start);
}


















void Board:: print() {
	for (int i = 8; i < 13; i++) {
		if(array[i] == 0){
			cout << "|   |";
		}
		else{
			cout << "| " << array[i] << " |";
		}
	}
	cout << endl;
	int k = 6;
	for (int j = 7; j > 4; j--) {
		if(array[j] == 0 && array[j+k] == 0){
			cout<<"|   |\t\t    |   |"<<endl;
		}
		if(array[j] != 0 && array[j+k] !=0){
			cout<<"| "<<array[j]<<" |\t\t    | "<<array[j+k]<<" |"<<endl;
		}
		if(array[j] !=0 && array[j+k] == 0){
			cout<<"| "<<array[j]<<" |\t\t    |   |"<<endl;
		}
		if(array[j] == 0 && array[j+k] !=0) {
			cout<<"|   |\t\t    | "<<array[j+k]<<" |"<<endl;
		}
		/*cout << "|" << (array[j] == 0?" ":array[j])<< "|" << "\t    " 
		<< "|" << (array[j+k] == 0?" ":array[j+k]) << "|" << endl;*/
		k += 2;
	}
	for (int l = 4; l >= 0; l--) {
		if(array[l] == 0){
			cout<<"|   |";
		}
		else{
			cout << "| " << array[l] << " |";
		}
	}
	cout << endl;
}
