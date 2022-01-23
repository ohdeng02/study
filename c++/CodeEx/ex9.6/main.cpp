#include "QuadraticEquation.h"
#include <iostream>
using namespace std;

int main() {
	QuadraticEquation A(1, 4, 1);
	if (A.getDiscriminant() > 0) {
		cout << A.getRoot1() << " " << A.getRoot2() << endl;
	}
	else if (A.getDiscriminant() == 0) {
		cout << A.getRoot1() << endl;
	}
	else {
		cout << "The equation has no real roots" << endl;
	}
	return 0;
}