#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	cout << "Enter the number of balls to drop: ";
	int ball;
	cin >> ball;
	cout << "Enter the number of slots in the bean machine: ";
	int slot;
	cin >> slot;
	cout << endl;
	int* slots = new int[slot];
	for (int i = 0; i < slot; i++) {
		slots[i] = 0;
	}
	int a = 0;
	int n = 0;
	srand((unsigned)time(NULL));
	for (int j = 0; j < ball;j++) {
		for (int i = 0; i < slot-1 ; i++) {
			n = rand() % 2;
			if (n == 1) {
				a++;
				cout << "R";
			}
			else if(n==0){
				cout << "L";
			}
		}
		cout << endl;
		slots[a]+=1;
		a = 0;
	}
	cout << endl;
	for (int i = 0; i < slot; i++) {
		for (int j = 0; j < slots[i]; j++) {
			cout << 0;
		}
		cout << endl;
	}
	delete[] slots; slots = NULL;
	return 0;
}