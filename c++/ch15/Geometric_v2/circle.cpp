#include "circle.h"
#include<iostream>
using namespace std;

Circle::Circle()
	:Geometric()
{
	cout << "Circle 인자 없는 생성자" << endl;
	radius = 1;
}
Circle::Circle(double r)
	:Geometric()
{
	cout << "Circle 인자 있는 생성자" << endl;
	radius = r;
}
Circle::Circle(double r, const string& _color, int _x, int _y)
	:Geometric(_color, _x, _y)
{
	cout << "Circle 인자 있는 생성자" << endl;
	radius = r;
}
Circle::Circle(const Circle& c)
	:Geometric(c)
{
	cout << "Circle 복사 생성자" << endl;
	radius = c.radius;
}
Circle::~Circle() {
	cout << "Circle 소멸자" << endl;
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
	return "나는 circle 객체입니다.";
}
void Circle::draw() {
	cout<<"[Circle] Position = (" << x << ", " << y << ") Color = " 
		<< color <<", Radius = "<<radius<< endl;
}