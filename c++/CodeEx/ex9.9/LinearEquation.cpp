#include "LinearEquation.h"
#include <iostream>
using namespace std;

LinearEquation::LinearEquation(double _a, double _b, double _c, double _d, double _e, double _f) {
	a = _a; b = _b; c = _c; d = _d; e = _e; f = _f;
}
double LinearEquation::getA() {
	return a;
}
double LinearEquation::getB() {
	return b;
}
double LinearEquation::getC() {
	return c;
}
double LinearEquation::getD() {
	return d;
}
double LinearEquation::getE() {
	return e;
}
double LinearEquation::getF() {
	return f;
}
bool LinearEquation::isSolvable() {
	if (a * d - b * c != 0) {
		return true;
	}
	else {
		return false;
	}
}
double LinearEquation::getX() {
	return (e * d - b * f) / (a * d - b * c);
}
double LinearEquation::getY() {
	return (a * f - e * c) / (a * d - b * c);
}