#include "RegularPolygon.h"
#include <iostream>
using namespace std;

int main() {
	RegularPolygon a;
	RegularPolygon c(10, 4, 5.6, 7.8);
	RegularPolygon b(6, 4);
	cout << "a�� �ѷ��� ����: " << a.getPerimeter() << " " << a.getArea() << endl;
	cout << "b�� �ѷ��� ����: " << b.getPerimeter() << " " << b.getArea() << endl;
	cout << "c�� �ѷ��� ����: " << c.getPerimeter() << " " << c.getArea() << endl;
	return 0;
}