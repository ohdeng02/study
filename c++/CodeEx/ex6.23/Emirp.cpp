#include <iostream>
using namespace std;

int main() {
	int prime=2;
	int num;
	int number=0;
	for (int i = 1; number != 100;i++) {
		int plus = 0;
		num = prime;
		for (int x = 1; x <= prime; x++) {
			if (prime % x == 0) {
				plus++;
			}
		}
		if (plus == 2) {
			int j;
			for (j = 0; prime != 0;j++) {
				prime=prime / 10;
			}
			prime = num;
			int a,reverse=0;
			int j1=j;
			for (int k = 0; k < j; k++) {
				a = num % 10;
				reverse += a * pow(10, j1-1);
				num /= 10;
				j1--;
			}
			if (reverse != prime) {
				plus = 0;
				for (int y = 1; y <= reverse; y++) {
					if (reverse % y == 0) {
						plus++;
					}
				}
				if (plus == 2) {
					cout << prime << "	";
					number++;
					if (number % 10 == 0) {
						cout << endl;
					}
				}
			}
		}
		prime++;
	}
	return 0;
}