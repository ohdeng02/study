#include<iostream>
#include "circle.h"
using namespace std;
//class�� ���ǿ� class�� implementation �и��� ����
//class ���ǿ��� member ���� member �Լ��� prototype�� ���´�.
//class implementation 

int main() {
	cout << sizeof(Circle) << endl;//8�� ���´�. Circle �ȿ� double ��������� ����Ǿ��־.
	Circle c1;//no-arg constructor
	cout << sizeof(c1) << endl;
	cout << "address of c1:" << &c1 << endl;
	//cout << "c1.radius:" << c1.radius << endl;
	cout << c1.getRadius() << endl;
	cout << "c1 ����:" << c1.getArea() << endl;
	Circle c2(5);
	cout << "address of c2:" << &c2 << endl;
	//cout << "c2.radius:" << c2.radius << endl;
	cout << "c2 ����:" << c2.getArea() << endl;
	c1 = c2;
	cout << "c1.radius:" << c1.getRadius();
	c1 = Circle();
	cout << "c1.radius:" << c1.getRadius();
	return 0;
}