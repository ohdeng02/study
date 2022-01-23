#include <iostream>
using namespace std;

int main() {
	cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
	double balance, rate;
	cin >> balance >> rate;
	double interest = balance * (rate / 1200);
	cout << "The interest is " << interest << endl;
	return 0;
}