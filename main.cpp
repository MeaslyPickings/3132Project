
#include "Board.h"
#include "Players.h"
#include <iostream>
using namespace std;

int main(void) {

	Board *b = new Board();
	b->print();
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