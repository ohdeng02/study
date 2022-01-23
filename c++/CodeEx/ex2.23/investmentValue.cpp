#include <iostream>
using namespace std;

int main() {
	cout << "Enter investment amount: ";
	double amount;
	cin >> amount;
	cout << "Enter annual interest rate in percentage: ";
	double rate;
	cin >> rate;
	cout << "Enter number of years: ";
	double years;
	cin >> years;
	double future = amount * pow((1 + rate / 1200.0), years * 12.0);
	cout << "Accumulated value is $" << future << endl;
	return 0;
}