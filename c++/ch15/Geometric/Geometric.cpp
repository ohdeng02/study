#include "Geometric.h"
#include <iostream>
using namespace std;

Geometric::Geometric() {
	cout << "Geo ���� ���� ������" << endl;
	color = "white";
	filled = false;
}
Geometric::Geometric(const string& _color, bool _filled) {
	cout << "Geo ���� �ִ� ������" << endl;
	color = _color;
	filled = _filled;
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
string Geometric::toString() {
	return "���� Geo ��ü�Դϴ�.";
}