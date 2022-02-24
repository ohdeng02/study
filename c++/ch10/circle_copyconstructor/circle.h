#ifndef CIRCLE_H
#define CIRCLE_H
class Circle {
private:
	double radius;
public:
	Circle();
	Circle(double r);
	Circle(const Circle& c);//copy constructor ���� ������
	~Circle();
	double getArea();
	double getRadius();
	void  setRadius(double r);
};
#endif
