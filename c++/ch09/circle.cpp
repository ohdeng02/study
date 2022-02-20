#include<iostream>
using namespace std;
//class�� ���ǿ� class�� implementation �и��� ����
//class ���ǿ��� member ���� member �Լ��� prototype�� ���´�.
//class implementation 
class Circle{
public:
	double radius;
	Circle();
	Circle(double r);
	double getArea();
};
Circle::Circle() {//scope resolution operator
	cout << "no-arg constructor" << endl;
	radius = 1;
}
Circle::Circle(double r) {
	cout << "arg constructor" << endl;
	radius = r;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}
int main() {
	cout << sizeof(Circle) << endl;//8�� ���´�. Circle �ȿ� double ��������� ����Ǿ��־.
	Circle c1;
	cout << sizeof(c1) << endl;
	cout << "address of c1:" << &c1 << endl;
	cout << "c1.radius:" << c1.radius << endl;
	cout << "c1 ����:" << c1.getArea() << endl;
	Circle c2(5);
	cout << "address of c2:" << &c2 << endl;
	cout << "c2.radius:" << c2.radius << endl;
	cout << "c2 ����:" << c2.getArea() << endl;
	c1 = c2;
	cout << "c1.radius:" << c1.radius;
	return 0;
}