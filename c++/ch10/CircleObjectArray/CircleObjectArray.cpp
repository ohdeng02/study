#include<iostream>
#include "circle.h"
using namespace std;

int main() {
	Circle pizza(30);
	cout << sizeof(pizza);
	Circle* p = &pizza;
	//p�� Ȱ���ؼ� pizza�� ������ ȣ���Ͻÿ�.
	cout << "pizza�� ����:" << p->getArea() << endl;
	cout << "p:" << p << endl;
	cout << "p+3:" << p + 3 << endl;
	Circle A[3];
	Circle B[3] = { Circle(10),Circle(20),Circle(30) };
	p = B;
	//B array�� ������ element�� radius�� ���� 1,2,3���� �ٲپ��.
	// 0��° ���: index expression with array name �� ����
	// 1��° ���: pointer expression with array name �� ����
	// 2��° ���: pointer expression with pointer, p �� ����

	B[0].setRadius(1);
	(B + 1)->setRadius(2);
	(p + 2)->setRadius(3);
	//forloop�� ���ؼ� ���� ������� ������ ���̱�. 
	for (int i = 0;i < 3;i++) {
		cout << B[i].getArea() << " " << (B + i)->getArea() << " " << (p + i)->getArea()<<endl;
	}
	for (int i = 0;i < 3;i++) {
		cout << B[i].getRadius() << " " << (B + i)->getRadius() << " " << (p + i)->getRadius() << endl;
	}
}
