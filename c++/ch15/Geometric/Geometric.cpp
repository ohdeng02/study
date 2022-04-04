#include "Geometric.h"
#include <iostream>
using namespace std;

Geometric::Geometric() {
	cout << "Geo 인자 없는 생성자" << endl;
	color = "white";
	filled = false;
}
Geometric::Geometric(const string& _color, bool _filled) {
	cout << "Geo 인자 있는 생성자" << endl;
	color = _color;
	filled = _filled;
}
Geometric::Geometric(const Geometric& g) {
	cout << "Geo Copy constructor" << endl;
	filled = g.filled;
	color = g.color;
}
Geometric::~Geometric() {
	cout << "Geo 소멸자" << endl;
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
	return "나는 Geo 객체입니다.";
}