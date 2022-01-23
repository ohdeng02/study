#include "MyPoint.h"
#include <iostream>
#include <math.h>
using namespace std;

MyPoint::MyPoint() {
	x = 0;
	y = 0;
}
MyPoint::MyPoint(double _x, double _y) {
	x = _x;
	y = _y;
}
double MyPoint::getX() {
	return x;
}
double MyPoint::getY() {
	return y;
}
double MyPoint::distance(MyPoint a) {
	return sqrt(pow(x-a.getX(), 2) + pow(y-a.getY(), 2));
}