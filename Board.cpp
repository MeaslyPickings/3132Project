
#include "Board.h"
#include <iostream>
using namespace std;

Board:: Board() {
	this->size = 25;
	array = new int[size];
}

Board:: ~Board() {

}

void Board:: print() {
	for (int i = 0; i <= 15; i++) {
		array[i] = 0;
	}
	array[1] = 2;
	array[2] = 1;
	array[5] = 2;
	array[6] = 1;
	array[9] = 2;
	array[10] = 1;
	array[13] = 2;
	array[14] = 1;
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
