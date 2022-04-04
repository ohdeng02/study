#ifndef GEOMETRIC_H
#define GEOMETRIC_H
#include <string>
using namespace std;

class Geometric {
private:
	string color;
	bool filled;
public:
	Geometric();
	Geometric(const string& _color, bool _filled);
	Geometric(const Geometric& g);
	~Geometric();
	string getColor();
	void setColor(const string& _color);
	bool isFilled();
	void setFilled(bool _filled);
	string toString();

};
#endif