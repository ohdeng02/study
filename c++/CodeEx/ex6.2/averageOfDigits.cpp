#include <iostream>
using namespace std;
double averageDigits(long n);

int main() {
	cout << "Enter a integer: ";
	int a;
	cin >> a;
	cout << "average of digits in integer is " << averageDigits(a) << endl;
	return 0;
}
double averageDigits(long n) {
	double average;
	double sum = 0;
	int i;
	for (i = 0; n != 0; i++) {
		sum += n % 10;
		n = n / 10;
	}
	average = sum /i;
	return average;
}