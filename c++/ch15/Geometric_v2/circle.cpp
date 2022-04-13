#include "circle.h"
#include<iostream>
using namespace std;

Circle::Circle()
	:Geometric()
{
	cout << "Circle ���� ���� ������" << endl;
	radius = 1;
}
Circle::Circle(double r)
	:Geometric()
{
	cout << "Circle ���� �ִ� ������" << endl;
	radius = r;
}
Circle::Circle(double r, const string& _color, int _x, int _y)
	:Geometric(_color, _x, _y)
{
	cout << "Circle ���� �ִ� ������" << endl;
	radius = r;
}
Circle::Circle(const Circle& c)
	:Geometric(c)
{
	cout << "Circle ���� ������" << endl;
	radius = c.radius;
}
Circle::~Circle() {
	cout << "Circle �Ҹ���" << endl;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}
double Circle::getRadius() {
	return radius;
}
void Circle::setRadius(double r) {
	if (r >= 0) {
		radius = r;
	}
	else
		radius = 0;
}
double Circle::getPerimeter() {
	return 2 * radius * 3.14159;
}
double Circle::getDiameter() {
	return 2 * radius;
}
string Circle::toString() {
	return "���� circle ��ü�Դϴ�.";
}
void Circle::draw() {
	cout<<"[Circle] Position = (" << x << ", " << y << ") Color = " 
		<< color <<", Radius = "<<radius<< endl;
}