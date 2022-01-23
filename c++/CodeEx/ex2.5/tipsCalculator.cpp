#include <iostream>
using namespace std;

int main() {
	int sub;
	int rate;
	cout << "Enter the subtotal and a gratuity rate : ";
	cin >> sub >> rate;
	double tip, total;
	tip = sub * (rate / 100.0);
	total = tip + sub;
	cout << "The gratuity is $" << tip << " and total is $" << total << endl;
	return 0;
}