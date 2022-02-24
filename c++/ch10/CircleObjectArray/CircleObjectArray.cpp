#include<iostream>
#include "circle.h"
using namespace std;

int main() {
	Circle pizza(30);
	cout << sizeof(pizza);
	Circle* p = &pizza;
	//p를 활용해서 pizza의 면적을 호출하시오.
	cout << "pizza의 면적:" << p->getArea() << endl;
	cout << "p:" << p << endl;
	cout << "p+3:" << p + 3 << endl;
	Circle A[3];
	Circle B[3] = { Circle(10),Circle(20),Circle(30) };
	p = B;
	//B array의 각각의 element의 radius를 각각 1,2,3으로 바꾸어라.
	// 0번째 요소: index expression with array name 한 가지
	// 1번째 요소: pointer expression with array name 두 가지
	// 2번째 요소: pointer expression with pointer, p 두 가지

	B[0].setRadius(1);
	(B + 1)->setRadius(2);
	(p + 2)->setRadius(3);
	//forloop를 통해서 위의 방법으로 면적을 보이기. 
	for (int i = 0;i < 3;i++) {
		cout << B[i].getArea() << " " << (B + i)->getArea() << " " << (p + i)->getArea()<<endl;
	}
	for (int i = 0;i < 3;i++) {
		cout << B[i].getRadius() << " " << (B + i)->getRadius() << " " << (p + i)->getRadius() << endl;
	}
}
