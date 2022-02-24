#include <iostream>
#include "circle.h"
using namespace std;
//class의 정의와 class의 implementation 분리할 예정
//class 정의에는 member 변수 member 함수의 prototype만 적는다.
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
//	//생성자가 종류별로 몇번 불리어졌는지, 소멸자가 몇번 불리어졌는지.
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


