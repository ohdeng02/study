#ifndef MYPOINT_H
#define MYPOINT_H
using namespace std;
class MyPoint {
private:
	double x;
	double y;
public:
	MyPoint();
	MyPoint(double _x, double _y);
	double getX();
	double getY();
	double distance(MyPoint a);
};
#endif
