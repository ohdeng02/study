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
	Geometric(const string& color, int _x, int _y);
	Geometric(const Geometric& g);
	~Geometric();
	string getColor() const;
	void setColor(const string& color);
	bool isFilled() const;
	void setFilled(bool filled);
	void setX(int _x);
	int getX();
	void setY(int _y);
	int getY();
	void draw();
	string toString() const;
};
#endif