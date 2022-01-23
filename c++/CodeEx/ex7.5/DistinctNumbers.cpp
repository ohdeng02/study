#include <iostream>
using namespace std;

int main() {
	cout << "Enter ten numbers: ";
	int numbers[10];
	for (int i = 0; i < 10; i++) {
		 cin>> numbers[i];
	}
	int distinct[10];
	int b = 0;
	bool a = false;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < sizeof(distinct) / 4; j++) {
			if (distinct[j] == numbers[i]) {
				a=true;
			}
		}
		if (a == false) {
			distinct[b] = numbers[i];
			b++;
		}
		a = false;
	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < b; i++)
	{
		cout << distinct[i] << " ";
	}
	return 0;
}