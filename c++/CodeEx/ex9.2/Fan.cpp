#include <iostream>
#include "Fan.h"
using namespace std;

Fan::Fan() {
	speed = 1;
	on = false;
	radius = 5;
}
int Fan::getSpeed() {
	return speed;
}
void Fan::setSpeed(int _speed) {
	speed = _speed;
}
bool Fan::isOn() {
	return on;
}
void Fan::setOn(bool _on) {
	on = _on;
}
double Fan::getRadius() {
	return radius;
}
void Fan::setRadius(double _radius) {
	radius = _radius;
}