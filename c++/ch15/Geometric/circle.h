#ifndef CIRCLE_H
#define CIRCLE_H
#include "Geometric.h"
class Circle:public Geometric {
private:
	double radius;
public:
	Circle();
	Circle(double r);
	Circle(double r, const string& _color, bool _filled);
	Circle(const Circle& c);
	~Circle();
	double getArea();
	double getRadius();
	void setRadius(double r);
	double getPerimeter();
	double getDiameter();
	string toString();
};
#endif
