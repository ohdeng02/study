#include "Geometric.h"
#include <iostream>
using namespace std;

Geometric::Geometric() {
	cout << "Geo ���� ���� ������" << endl;
	color = "white";
	filled = false;
}
Geometric::Geometric(const string& _color, int _x, int _y) {
	cout << "Geo ���� �ִ� ������" << endl;
	color = _color;
	x = _x;
	y = _y;
}
Geometric::Geometric(const Geometric& g) {
	cout << "Geo Copy constructor" << endl;
	filled = g.filled;
	color = g.color;
}
Geometric::~Geometric() {
	cout << "Geo �Ҹ���" << endl;
}
string Geometric::getColor() {
	return color;
}
void Geometric::setColor(const string& _color) {
	color = _color;
}
bool Geometric::isFilled() {
	return filled;
}
void Geometric::setFilled(bool _filled) {
	filled = _filled;
}
int Geometric::getX() {
	return x;
}
void Geometric::setX(int _x) {
	x = _x;
}
int Geometric::getY() {
	return y;
}
void Geometric::setY(int _y) {
	y = _y;
}
void Geometric::draw() {
	cout << "[Geo] Position = (" << x << ", " << y << ") Color = " << color << endl;
}
string Geometric::toString() {
	return "���� Geo ��ü�Դϴ�.";
}