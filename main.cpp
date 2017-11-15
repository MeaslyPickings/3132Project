
#include "Board.h"
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	Board *b = new Board();
	b->addBlockOnBoard();
	b->print();

	Dice d;
	d.print();
	
	// int array[16];
	// for (int i = 0; i <= 15; i++) {
	// 	array[i] = i;
	// }

	// for (int i = 8; i < 13; i++) {
	// 	cout << "|" << array[i] << "|";
	// }
	// cout << endl;
	// int k = 6;
	// for (int j = 7; j > 4; j--) {
	// 	cout << "|" << array[j] << "|" << "\t    " 
	// 	<< "|" << array[j+k] << "|" << endl;
	// 	k += 2;
	// }
	// for (int l = 4; l >= 0; l--) {
	// 	cout << "|" << array[l] << "|";
	// }
	// cout << endl;

	int playerNum;
	
	cout << "-----------------++ SORRY ++----------------------\n\n" << "Welcome to the game of SORRY. In order to player," << endl;
																	 <<	"select the number of players. When it is your turn," << endl;
																	 <<	"press the appropriate key to roll the dice and move\n" << endl;
	while () { //user input selects continue
		cout << "How many players are there? ----> ";
		cin >> playerNum;
		if (playerNum == 4) {
			Players p1 = PLayers(1);
			Players p2 = PLayers(2);
			Players p3 = PLayers(3);
			Players p4 = PLayers(4);
			Board *b = new Board(p1, p2, p3, p4);
			cout << "Start!\n" << endl;
			b->startGame(p1);
			b->startGame(p2);
			b->startGame(p3);
			b->startGame(p4);
			while() { //still at least 2 players competing
			
			}
			//declare winners and placements
		}
		else if (playerNum == 3) {
			Players p1 = PLayers(1);
			Players p2 = PLayers(2);
			Players p3 = PLayers(3);
			Board *b = new Board(p1, p2, p3);
			cout << "Start!\n" << endl;
			b->startGame(p1);
			b->startGame(p2);
			b->startGame(p3);
			while() { //still at least 2 players competing
			
			}
			//declare winners and placements
		}
		else if (playerNum == 2) {
			Players p1 = PLayers(1);
			Players p2 = PLayers(2);
			Board *b = new Board(p1, p2);
			cout << "Start!\n" << endl;
			b->startGame(p1);
			b->startGame(p2);
			while() { //still at least 2 players competing
			
			}
			//declare winners and placements
		}
		else {
			cout << "ERROR, invalid number of players!" << endl;
		}
		//reset input
	} 
	
	return 0;
}