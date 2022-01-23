#include <iostream>
using namespace std;

int main() {
	int digit = 2;
	int plus=0;
	int a = 0;
	int num;
	cout << "Prime number		Sum of its digits" << endl;
	for (int k = 0; a != 25;k++) {
		num = digit;
		for (int i = 1; i <= digit; i++) {
			if (digit % i == 0) {
				plus++;
			}
		}
		digit = num;
		int sum = 0;
		if (plus == 2) {
			for (int j = 0; digit != 0; j++) {
				sum += digit % 10;
				digit /= 10;
			}
			plus = 0;
			digit = num;
			for (int i = 1; i <= sum; i++) {
				if (sum % i == 0) {
					plus++;
				}
			}
			if (plus == 2) {
				a++;
				cout << digit << "			" << sum << endl;
			}
		}
		digit++;
		plus = 0;
	}

	return 0;
}