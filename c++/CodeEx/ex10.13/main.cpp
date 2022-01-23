#include "RegularPolygon.h"
#include <iostream>
using namespace std;

int main() {
	RegularPolygon a;
	RegularPolygon c(10, 4, 5.6, 7.8);
	RegularPolygon b(6, 4);
	cout << "a의 둘레와 넓이: " << a.getPerimeter() << " " << a.getArea() << endl;
	cout << "b의 둘레와 넓이: " << b.getPerimeter() << " " << b.getArea() << endl;
	cout << "c의 둘레와 넓이: " << c.getPerimeter() << " " << c.getArea() << endl;
	return 0;
}