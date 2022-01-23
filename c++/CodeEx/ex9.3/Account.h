#ifndef ACCOUNT_H
#define ACCOUNT_H
using namespace std;
class Account {
private:
	int id;
	double balance;
	double annualInterestRate;
public:
	Account();
	int getId();
	void setId(int _id);
	double getBalance();
	void setBalance(double _balance);
	double getAnnualInterestRate();
	void setAnnualInterestRate(double _annualInterestRate);
	double getMonthlyInterestRate();
	void withdraw(int amount);
	void deposit(int amount);
};
#endif
