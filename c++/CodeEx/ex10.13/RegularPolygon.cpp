#include <iostream>
#include <math.h>
#include "RegularPolygon.h"
using namespace std;

RegularPolygon::RegularPolygon() {
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}
RegularPolygon::RegularPolygon(int _n, double _side) {
	n = _n;
	side = _side;
	x = 0;
	y = 0;
}
RegularPolygon::RegularPolygon(int _n, double _side, double _x, double _y) {
	n = _n;
	side = _side;
	x = _x;
	y = _y;
}
int RegularPolygon::getN() const {
	return n;
}
void RegularPolygon::setN(int _n) {
	n = _n;
}
double RegularPolygon::getSide() const {
	return side;
}
void RegularPolygon::setSide(double _side) {
	side = _side;
}
double RegularPolygon::getX() const {
	return x;
}
void RegularPolygon::setX(double _x) {
	x = _x;
}
double RegularPolygon::getY() const {
	return y;
}
void RegularPolygon::setY(double _y) {
	y = _y;
}
double RegularPolygon::getPerimeter() const {
	return side * n;
}
double RegularPolygon::getArea() const {
	return (n * pow(getPerimeter(), 2)) / (4 * tan(3.14 / n));
}