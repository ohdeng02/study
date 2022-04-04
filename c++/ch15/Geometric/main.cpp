#include <iostream>
#include "Geometric.h"
#include "circle.h"
#include "Rect.h"
using namespace std;

void Func(Geometric g) {
	cout << "I'm in Func()" << endl;
	cout << g.toString() << " " << g.getColor() << endl;
}
int main() {
	Geometric g3("blue", false);
	//Geometric g4(g3);
	Func(g3);
	Circle c3(50, "orange", true);
	//Circle c4(c3);
	Func(c3); 

	Circle c4(60, "red", true);
	c4.setColor("pink");
	cout << c4.getColor();
	
	/*Geometric g;
	Circle c1;
	cout << c1.toString() << endl;
	cout << c1.getColor() << endl;
	Circle c2(55, "blue", true);
	cout << c2.toString() << endl;
	cout << c2.getColor() << endl;
	cout << c2.getRadius() << endl;
	Rect r1;
	cout << r1.toString() << endl;
	cout << r1.getColor() << endl;
	Rect r2(10, 100, "yellow", true);
	cout << r2.toString() << endl;
	cout << r2.getColor() << endl;
	cout << r2.getWidth() << endl;
	cout << r2.getHeight() << endl;*/
	
	return 0;
}