#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a=0;
	int num=2;
	for (int i = 0; a != 50; i++) {
		int j;
		int number = num;
		for (j = 0; num != 0;j++) {
			num = num / 10;
		}
		num=number;
		double reverse = 0;
		int j1 = j;
		int b;
		for (int k = 0; k < j; k++) {
			b = num % 10;
			reverse += b * pow(10, j1-1);
			num = num / 10;
			j1--;
		}
		num = number;
		if ( num == reverse) {
			cout << num << "	";
			a++;
			if (a % 5 == 0) {
				cout << endl;
			}
		}
		num += 2;
	}
	return 0;
}