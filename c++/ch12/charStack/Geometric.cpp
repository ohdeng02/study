#include <iostream>
#include "Geometric.h"
using namespace std;
Geometric::Geometric()
{
	color = "white";
	filled = false;
}
Geometric::Geometric(const string& color, int _x, int _y)
{
	this->color = color;
	x = _x; y = _y;
}
Geometric::Geometric(const Geometric& g) {
	color = g.color;
	x = g.x; y = g.y;
}
Geometric::~Geometric() {
}
string Geometric::getColor() const
{
	return color;
}
void Geometric::setColor(const string& color)
{
	this->color = color;
}
bool Geometric::isFilled() const
{
	return filled;
}
void Geometric::setFilled(bool filled)
{
	this->filled = filled;
}
void Geometric::setX(int _x) {
	x = _x;
}
int Geometric::getX() {
	return x;
}
void Geometric::setY(int _y) {
	y = _y;
}
int Geometric::getY() {
	return y;
}
void Geometric::draw() {
	cout << "[Geo] Position = (" << x << ", " << y << "), Color = " << color << endl;
}
string Geometric::toString() const
{
	return "나는 Geometric 객체입니다.";
}