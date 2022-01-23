#include <iostream>
using namespace std;
void displayEven(int number);

int main() {
	cout << "Enter the integer: ";
	int num;
	cin >> num;
	cout << "integer's evenumbers: ";
	displayEven(num);
	return 0;
}
void displayEven(int number) {
	int num;
	bool a = false;
	for (int i = 0; number != 0; i++) {
		num = number % 10;
		number = number / 10;
		if (num % 2 == 0) {
			cout << num << " ";
			a = true;
		}
	}
	if (a == false) {
		cout << "This number dosen't have evennumber.";
	}
	cout << endl;
}