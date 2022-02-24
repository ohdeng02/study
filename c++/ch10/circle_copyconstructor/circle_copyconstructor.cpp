#include <iostream>
#include "circle.h"
using namespace std;
//class�� ���ǿ� class�� implementation �и��� ����
//class ���ǿ��� member ���� member �Լ��� prototype�� ���´�.
//class implementation 
void printCircleByVal(Circle c);
void printCircleByRef(Circle& c);
void printCircleByPtr(Circle* p);
int main() {
	Circle c1;
	Circle c2(5);
	printCircleByVal(c2);
	Circle pizza(25);
	cout << "pizza.getArea(): " << pizza.getArea() << endl;
	return 0;
}	
	/*Circle c1(5);
	Circle c2(c1);
	cout << c1.getRadius() << " " << c2.getRadius() << endl;
	c1.setRadius(10);
	cout << c1.getRadius() << " " << c2.getRadius() << endl;
	c2.setRadius(15);
	cout << c1.getRadius() << " " << c2.getRadius() << endl;*/

//	Circle c1;
//	Circle c2(5);
//	printCircleByVal(c2);
//	Circle pizza(25);
//	cout << "pizza.getArea(): " << pizza.getArea() << endl;
//	//�����ڰ� �������� ��� �Ҹ���������, �Ҹ��ڰ� ��� �Ҹ���������.
//	return 0;
//}
//void printCircleByVal(Circle c) {
//	cout << "&c:" << &c << endl;
//	cout << "c.getArea():" << c.getArea() << endl;
//	Circle apple;
//	Circle pear(apple);
//}
//void printCircleByRef(Circle& c) {
//	cout << "&c:" << &c << endl;
//	cout << "c.getArea():" << c.getArea() << endl;
//
//}
//void printCircleByPtr(Circle* p) {
//	cout << "&p:" << &p << endl;
//	cout << "(*p).getArea():" << (*p).getArea() << endl;
//	cout << "p->getArea():" << p->getArea() << endl;
//
void printCircleByVal(Circle c) {
	cout << "&c: " << &c << endl;
	cout << "c.getArea(): " << c.getArea() << endl;
	Circle apple;
	Circle pear(apple);
}


