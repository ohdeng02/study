#include<iostream>
#include "circle.h"
using namespace std;
//class의 정의와 class의 implementation 분리할 예정
//class 정의에는 member 변수 member 함수의 prototype만 적는다.
//class implementation 

int main() {
	cout << sizeof(Circle) << endl;//8이 나온다. Circle 안에 double 멤버변수가 선언되어있어서.
	Circle c1;
	cout << sizeof(c1) << endl;
	cout << "address of c1:" << &c1 << endl;
	cout << "c1.radius:" << c1.radius << endl;
	cout << "c1 면적:" << c1.getArea() << endl;
	Circle c2(5);
	cout << "address of c2:" << &c2 << endl;
	cout << "c2.radius:" << c2.radius << endl;
	cout << "c2 면적:" << c2.getArea() << endl;
	c1 = c2;
	cout << "c1.radius:" << c1.radius;
	return 0;
}
