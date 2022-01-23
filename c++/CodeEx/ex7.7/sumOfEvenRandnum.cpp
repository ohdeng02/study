#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int random[25];
	int sum = 0;
	for (int i = 0; i < 25; i++) {
		random[i]=rand()%26;
		if (random[i] % 2 == 0) {
			sum += random[i];
		}
	}
	for (int i = 0; i < 25; i++) {
		cout << random[i] << " ";
	}

	cout <<endl<< sum << endl;
	
	return 0;
}