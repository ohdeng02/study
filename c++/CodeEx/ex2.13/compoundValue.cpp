#include <iostream>
using namespace std;

int main() {
	cout << "Enter the monthly saving amount: ";
	int money;
	cin >> money;
	double value=0;
	for (int i = 0; i < 6; i++) {
		value = (value + money) * 1.00417;
	}
	cout << "After the sixth month, the account value is " << value << endl;
	return 0;
}