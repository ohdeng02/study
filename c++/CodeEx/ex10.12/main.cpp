#include <iostream>
#include "Stock.h"
using namespace std;

int main() {
	Stock a("MSFT", "MicrosoftCorporation");
	a.setPreviousClosingPrice(27.5);
	a.setCurrentPrice(27.6);
	cout << a.getChangePercent() << endl;
	
}