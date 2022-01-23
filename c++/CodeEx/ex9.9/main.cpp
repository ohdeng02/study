#include "LinearEquation.h"
#include <iostream>
using namespace std;

int main() {
	double a, b, c, d, e, f;
	cout << "Enter the a, b, c, d, e, f: ";
	cin >> a >> b >> c >> d >> e >> f;
	LinearEquation A(a, b, c, d, e, f);
	if (A.isSolvable() == true) {
		cout << "x: " << A.getX() << " y: " << A.getY() << endl;
	}
	else if (A.isSolvable() == false) {
		cout << "The equation has no solution."<<endl;
	}
	return 0;
}