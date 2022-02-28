#include <iostream>
#include "circle.h"
using namespace std;

int Circle::numOfObjs=0; // static variable √ ±‚
Circle::Circle() { // scope resolution operator
	cout << "no-arg constructor" << endl;
	radius = 1;
	numOfObjs++;
}
Circle::Circle(double radius) {
	cout << "arg constructor" << endl;
	this->radius = radius;
	numOfObjs++;
}
Circle::Circle(const Circle& obj) {
	cout << "copy constructor" << endl;
	radius = obj.radius;
	numOfObjs++;
}
Circle::~Circle() {
	cout << "deconstructor" << endl;
	numOfObjs--;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}

double Circle::getRadius() {
	return radius;
}
void Circle::setRadius(double radius) {
	if (radius >= 0)
		this->radius = radius;
	else
		this->radius = 0;
}
int Circle::getNumOfObjs() {
	return numOfObjs;
}
void Circle::showYourself() {
	cout << "radius: " << radius << " this: " << this << endl;
}