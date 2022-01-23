#include <iostream>
using namespace std;

int main() {
	cout << "Enter a number between 0 and 1000: ";
	int num;
	cin >> num;
	int first, second, third;
	third = num % 10;
	num = num / 10;
	second = num % 10;
	num = num / 10;
	first = num % 10;
	num = num / 10;
	int sum = first + second + third;
	cout << "The sum of the digits is " << sum << endl;
	return 0;
}