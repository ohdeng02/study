#include<iostream>
#include "circle.h"
using namespace std;
//class�� ���ǿ� class�� implementation �и��� ����
//class ���ǿ��� member ���� member �Լ��� prototype�� ���´�.
//class implementation 
void printCircleByVal(Circle c);
void printCircleByRef(Circle& c);
void printCircleByPtr(Circle* p);
int main() {
	cout << sizeof(Circle) << endl;
	Circle c;
	Circle* p = &c;
	//p�� ���� 0012FF48�̶�� p+1��? 0012FF50
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

