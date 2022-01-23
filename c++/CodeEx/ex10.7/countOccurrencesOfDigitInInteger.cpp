#include <iostream>
using namespace std;
void countDigits(const int& number, int dArray[], int size);

int main() {
	cout << "Enter the integer: ";
	int number;
	cin >> number;
	int arr[10] = { 0 };
	countDigits(number, arr, 10);
	for (int i = 0; i < 10; i++) {
		cout << i<<": "<< arr[i] << endl;
	}
	return 0;
}
void countDigits(const int& number, int dArray[], int size) {
	int num = number;
	int a;
	for (int i = 0; num != 0; i++) {
		a = num % 10;
		dArray[a]++;
		num /= 10;
	}
}