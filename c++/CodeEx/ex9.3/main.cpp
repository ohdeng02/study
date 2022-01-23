#include "Account.h"
#include <iostream>
using namespace std;

int main() {
	Account a;
	a.setId(1122);
	a.setBalance(20000);
	a.setAnnualInterestRate(0.45);
	a.withdraw(2500);
	a.deposit(3000);
	cout <<"ÀÜ¾×: "<< a.getBalance() << endl;
	cout << "¿ùÀÌÀÚ: " << a.getMonthlyInterestRate() * a.getBalance() << endl;
	return 0;
}