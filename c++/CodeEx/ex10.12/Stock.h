#ifndef STOCK_H
#define STOCK_H
#include <string>
#include <iostream>
using namespace std;
class Stock {
private:
	string symbol;
	string name;
	double previousClosingPrice;
	double currentPrice;
public:
	Stock(const string& symbol, const string& name);
	string getSymbol() const;
	string getName() const;
	double getPreviousClosingPrice() const;
	double getCurrentPrice() const;
	void setPreviousClosingPrice(double price);
	void setCurrentPrice(double price);
	double getChangePercent() const;
};
#endif
