#ifndef LINEAREQUATION_H
#define LINEAREQUATION_H
class LinearEquation {
private:
	double a, b, c, d, e, f;
public:
	LinearEquation(double _a, double _b, double _c, double _d, double _e, double _f);
	double getA();
	double getB();
	double getC();
	double getD();
	double getE();
	double getF();
	bool isSolvable();
	double getX();
	double getY();
};
#endif
