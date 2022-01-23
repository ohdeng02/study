#include <iostream>
using namespace std;
double futureInvestmentValue(double investmentAmount,
	double monthlyInterestRate, int years);

int main() {
	cout << "The amount invested: ";
	double amount;
	cin >> amount;
	cout << "Annual interest rate: ";
	double rate;
	cin >> rate;
	cout << endl;
	double value = futureInvestmentValue(amount, rate/1200, 30);
	cout << "30yesrs later investment value is " << value << endl;
	return 0;
}
double futureInvestmentValue(double investmentAmount,
	double monthlyInterestRate, int years) {
	cout << "Years		Future Value" << endl;
	double value=0;
	for (int i = 1; i <= years; i++) {
		cout << i;
		value = investmentAmount * (1 + monthlyInterestRate);
		for (int i = 1; i < 12; i++) {
			value = value * (1 + monthlyInterestRate);
		}
		cout << "		"<<value << endl;
		investmentAmount = value;
	}
	return value; 
}