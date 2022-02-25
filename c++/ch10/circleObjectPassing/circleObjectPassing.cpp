#include<iostream>
#include "circle.h"
using namespace std;
//class의 정의와 class의 implementation 분리할 예정
//class 정의에는 member 변수 member 함수의 prototype만 적는다.
//class implementation 
void printCircleByVal(Circle c);
void printCircleByRef(Circle& c);
void printCircleByPtr(Circle* p);
int main() {
	cout << sizeof(Circle) << endl;
	Circle c;
	Circle* p = &c;
	//p의 값이 0012FF48이라면 p+1은? 0012FF50
	Circle obj(5.5);
	cout << "&obj:" << &obj << endl;
	printCircleByVal(obj);
	printCircleByRef(obj);
	printCircleByPtr(&obj);
	cout << "end" << endl;
	return 0;
}
void printCircleByVal(Circle c) {
	cout << "&c:" << &c << endl;
	cout << "c.getArea():" << c.getArea() << endl;
}
void printCircleByRef(Circle& c) {
	cout << "&c:" << &c << endl;
	cout << "c.getArea():" << c.getArea() << endl;

}
void printCircleByPtr(Circle* p) {
	cout << "&p:" << &p << endl;
	cout << "(*p).getArea():" << (*p).getArea() << endl;
	cout << "p->getArea():" << p->getArea() << endl;

}

