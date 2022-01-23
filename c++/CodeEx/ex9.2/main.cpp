#include <iostream>
#include "Fan.h"
using namespace std;

int main() {
	Fan a;
	Fan b;
	a.setSpeed(3);
	a.setRadius(10);
	a.setOn(true);
	cout << "First fan properties: " << endl;
	cout << "speed: " << a.getSpeed() << " radius: " << a.getRadius() << " on/off: " << a.isOn() << endl;
	b.setSpeed(2);
	b.setRadius(5);
	b.setOn(false);
	cout << "Second fan properties: " << endl;
	cout << "speed: " << b.getSpeed() << " radius: " << b.getRadius() << " on/off: " << b.isOn() << endl;
	return 0;
}