#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H
class RegularPolygon {
private:
	int n;
	double side;
	double x;
	double y;
public:
	RegularPolygon();
	RegularPolygon(int _n, double _side);
	RegularPolygon(int _n, double _side, double _x, double _y);
	int getN() const;
	void setN(int _n);
	double getSide() const;
	void setSide(double _side);
	double getX() const;
	void setX(double _x);
	double getY() const;
	void setY(double _y);
	double getPerimeter() const;
	double getArea() const;
};
#endif