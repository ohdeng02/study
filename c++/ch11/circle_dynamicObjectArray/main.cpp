#include <iostream>
#include "circle.h"
using namespace std;

int main() {
	Circle obj(50);
	cout << "address of obj: " << &obj << endl;
	obj.showYourself();
	////���� ��ü �迭 static binding
	//Circle A[3] = { Circle(5), Circle(15), Circle(25) };
	//Circle* p = A;
	//cout << "sizeof(Circle): " << sizeof(Circle) << endl;
	//cout << "p: " << p << " " << "p+1: " << p + 1 << endl; 
	//// ���� ��ü �迭 dynamic binding
	////����ڿ��� ���� ��ü �迭�� ũ�⸦ �����.
	////�� ũ�⿡ ���߾� ���� ��ü �迭�� �����Ѵ�.
	////����ڿ��Ԥ� �� circle�� radius�� ���� �����Ѵ�.
	////�� circle�� ������ ����ϰ� ������ ũ��� 100�� 200 ������ ������ ����Ѵ�.
	//int n;
	//double radius; 
	//cout << "How many Circle would you create? ";
	//cin >> n;
	//Circle* B = new Circle[n];
	//for (int i = 0;i < n;i++) {
	//	cout << "Circle " << i+1 << " radius: ";
	//	cin >> radius;
	//	B[i].setRadius(radius);
	//}
	//int count=0;
	//for (int i = 0;i < n;i++) {
	//	cout << (B + i)->getArea() << " ";
	//	if (B[i].getArea() >= 100 && B[i].getArea() <= 200) {
	//		count++;
	//	}
	//}
	//cout <<endl<< "number of circles whose area is in between 100 and 200: " << count << endl;
	//delete[]B; B = NULL;
	//return 0;
}


/*
arg constructor
&obj: 0113FB34
&c: 0113FA5C
c.getArea(): 94.985
&c: 0113FB34
c.getArea(): 94.985
p: 0113FB34
&p: 0113FA60
(*p).getArea(): 94.985
*/