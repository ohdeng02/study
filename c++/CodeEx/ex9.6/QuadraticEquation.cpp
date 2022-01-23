#include "QuadraticEquation.h"
#include <iostream>
#include <cmath>
using namespace std;

QuadraticEquation::QuadraticEquation() {

}
QuadraticEquation::QuadraticEquation(double _a, double _b, double _c) {
	a = _a;
	b = _b;
	c = _c;
}
double QuadraticEquation::getA() {
	return a;
}
double QuadraticEquation::getB() {
	return b;
}
double QuadraticEquation::getC() {
	return c;
}
double QuadraticEquation::getDiscriminant() {
	return pow(b, 2) - 4 * a * c;
}
double QuadraticEquation::getRoot1() {
	if (getDiscriminant() >= 0) {
		return (sqrt(getDiscriminant()) - b) / (2 * a);
	}
	else {
		return 0;
	}
}
double QuadraticEquation::getRoot2() {
	if (getDiscriminant() >= 0) {
		return (-sqrt(getDiscriminant()) - b) / (2 * a);
	}
	else {
		return 0;
	}
}