// #include "Move.h"
// #include <iostream>


// Move::Move(int name){
// 	this->setName(name);
// }
// void Move::startGame(){
// 	int name = this->getName();
// 	int start = this->getStart();
// 	Board::add(start,name);
// }

// bool Move::finished(int position){
// 	if(position == this->getFinish()){
// 		int piece = this->getPieces();
// 		int left = piece - 1;
// 		this->setPieces(left);
// 		return true;
// 	}
// 	return false;	
// }

// void Move::jump(){

// }

// void Move::move(int amount){
// 	int name = this->getName();
// 	int oldPos = this->getPosition();
// 	int finish = this->getFinish();

// 	Board::add(oldPos,0);
// 	int newPos = oldPos + amount;
// 	if(this->finished(newPos)){
// 		if(this->checkWin()){
// 			Board::add(oldPos,0);
// 			cout<<"You WINNN!!!"<<endl;
// 		}
// 		else{
// 			Board::add(oldPos,0);
// 			cout<<"Piece made it all the way around!!"<<this->getPieces()<<" left!!!"<<endl;
// 			cout<<"Your next piece is now placed on the start block."<<endl;
// 			this->startGame();

// 		}
// 	}
// 	else if(newPos > 15){
// 		int nextPos = newPos - 16;
// 		cout<<this->finished(nextPos)<<endl;
// 		if(this->finished(nextPos)){
// 			if(this->checkWin()){
// 				Board::add(oldPos,0);
// 				cout<<"You WINNN!!!"<<endl;
// 			}
// 			else{
// 				Board::add(oldPos,0);
// 				cout<<"Piece made it all the way around!!"<<this->getPieces()<<" left!!!"<<endl;
// 				cout<<"Your next piece is now placed on the start block."<<endl;
// 				this->startGame();

// 			}
// 		}

// 		else{
// 			Board::add(nextPos,name);
// 		}

// 	}
// 	else{
// 		Board::add(newPos,name);
// 	}

// }

// int Move::getPosition() {
// 	int position = -1;
// 	for (int i = 0; i < 16; i++) {
// 		if (array[i] == this->getName()) {
// 			position = i;
// 		}
// 	}
// 	return position;
// }



