#include "Board.h"
#include "Players.h"
#include "Dice.h"
#include "Move.h"
#include "Pieces.h"
#include <iostream>

using namespace std;

int main(void) {

	Board *b = new Board();
	Players *d = new Dice();
	// Players *p1 =new Move(1);
	// Players *p2 =new Move(2);

	// p2->startGame();
	// p1->startGame();

	// p1->print();

	int roll = d->roll();

	cout<<roll<<endl;

	// p2->print();
	// b->print();
	

	// demo
	// short choice;
	// cout << "Welcome" << ;
	// while (true) {

	// }

	//b->print();
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

	return 0;
}