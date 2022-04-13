#ifndef GEOMETRIC_H
#define GEOMETRIC_H
#include <string>
using namespace std;

class Geometric {
protected:
	string color;
	bool filled;
	int x, y;
public:
	Geometric();
	Geometric(const string& _color, int _x, int _y);
	Geometric(const Geometric& g);
	virtual ~Geometric();
	string getColor();
	void setColor(const string& _color);
	bool isFilled();
	void setFilled(bool _filled);
	int getX();
	void setX(int _x);
	int getY();
	void setY(int _y);
	virtual void draw();
	string toString();
};
#endif