#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H
class QuadraticEquation {
private:
	double a;
	double b;
	double c;
public:
	QuadraticEquation();
	QuadraticEquation(double _a, double _b, double _c);
	double getA();
	double getB();
	double getC();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
};
#endif
