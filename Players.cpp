#include "Players.h"
#include "Board.h"
#include <iostream>

Players:: Players() {
	this->name = 0;
	this->turn = 0;
	p = new Pieces(name);
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
	p = new Pieces(name);
}



void Players:: setName(int name) {
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

int Players:: getName() {
	return this->name;
}

void Players:: setTurn(int turn) {
	this->turn = turn;
}

int Players:: getTurn() {
	return this->turn;
}

Pieces Players:: getPieces() {
	return *p;
}

bool Players:: checkWin() {
	if (this->getPieces().getAmount() == 0) {
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
// void Players::print(){
// 	for (int i = 8; i < 13; i++) {
// 		if(array[i] == 0){
// 			cout << "|   |";
// 		}
// 		else{
// 			cout << "| " << array[i] << " |";
// 		}
// 	}
// 	cout << endl;
// 	int k = 6;
// 	for (int j = 7; j > 4; j--) {
// 		if(array[j] == 0 && array[j+k] == 0){
// 			cout<<"|   |\t\t    |   |"<<endl;
// 		}
// 		if(array[j] != 0 && array[j+k] !=0){
// 			cout<<"| "<<array[j]<<" |\t\t    | "<<array[j+k]<<" |"<<endl;
// 		}
// 		if(array[j] !=0 && array[j+k] == 0){
// 			cout<<"| "<<array[j]<<" |\t\t    |   |"<<endl;
// 		}
// 		if(array[j] == 0 && array[j+k] !=0) {
// 			cout<<"|   |\t\t    | "<<array[j+k]<<" |"<<endl;
// 		}
// 		/*cout << "|" << (array[j] == 0?" ":array[j])<< "|" << "\t    " 
// 		<< "|" << (array[j+k] == 0?" ":array[j+k]) << "|" << endl;*/
// 		k += 2;
// 	}
// 	for (int l = 4; l >= 0; l--) {
// 		if(array[l] == 0){
// 			cout<<"|   |";
// 		}
// 		else{
// 			cout << "| " << array[l] << " |";
// 		}
// 	}
// 	cout << endl;
// }


