#include "Stock.h"
#include <iostream>
using namespace std;

Stock::Stock(const string& symbol, const string& name) {
	this->symbol = symbol;
	this->name = name;
}
string Stock::getSymbol() const {
	return symbol;
}
string Stock::getName() const {
	return name;
}
double Stock::getPreviousClosingPrice() const {
	return previousClosingPrice;
}
double Stock::getCurrentPrice() const {
	return currentPrice;
}
void Stock::setPreviousClosingPrice(double price) {
	previousClosingPrice = price;
}
void Stock::setCurrentPrice(double price) {
	currentPrice = price;
}
double Stock::getChangePercent() const {
	return (currentPrice - previousClosingPrice) / previousClosingPrice;
}