#include "Account.h"
#include <iostream>
using namespace std;

Account::Account() {
	id = 0;
	balance = 0;
	annualInterestRate = 0;
}
int Account::getId() {
	return id;
}
void Account::setId(int _id) {
	id = _id;
}
double Account::getBalance() {
	return balance;
}
void Account::setBalance(double _balance) {
	balance = _balance;
}
double Account::getAnnualInterestRate() {
	return annualInterestRate;
}
void Account::setAnnualInterestRate(double _annualInterestRate) {
	annualInterestRate = _annualInterestRate;
}
double Account::getMonthlyInterestRate() {
	return annualInterestRate / 12;
}
void Account::withdraw(int amount) {
	if (balance < amount) {
		cout << "잔액이 부족합니다." << endl;
	}
	else {
		balance -= amount;
	}
}
void Account::deposit(int amount) {
	balance += amount;
}