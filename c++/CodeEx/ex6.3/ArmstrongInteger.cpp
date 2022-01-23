#include <iostream>
using namespace std;
int cubeOfDigits(int number);
void isArmstrong(int sum, int number);

int main() {
	cout << "Enter the integer: ";
	int num;
	int sum = 0;
	cin >> num;
	sum = cubeOfDigits(num);
	isArmstrong(sum, num);
	return 0;
}
int cubeOfDigits(int number) {
	int sum = 0;
	for (int i = 0; number != 0; i++) {
		sum += pow(number % 10, 3);
		number = number / 10;
	}
	return sum;
}
void isArmstrong(int sum, int number) {
	if (sum == number) {
		cout << "number is Armstrong" << endl;
	}
	else {
		cout << "number is not Armstrong" << endl;
	}
}