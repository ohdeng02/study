#include <iostream>
#include "circle.h"
using namespace std;

int main() {
	Circle obj(50);
	cout << "address of obj: " << &obj << endl;
	obj.showYourself();
	////정적 객체 배열 static binding
	//Circle A[3] = { Circle(5), Circle(15), Circle(25) };
	//Circle* p = A;
	//cout << "sizeof(Circle): " << sizeof(Circle) << endl;
	//cout << "p: " << p << " " << "p+1: " << p + 1 << endl; 
	//// 동적 객체 배열 dynamic binding
	////사용자에게 동적 객체 배열의 크기를 물어본다.
	////그 크기에 맞추어 동적 객체 배열을 생성한다.
	////사용자에게ㅐ 각 circle의 radius를 물어 저장한다.
	////각 circle의 면적을 출력하고 면적의 크기와 100과 200 사이의 개수를 출력한다.
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