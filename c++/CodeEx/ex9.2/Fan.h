#ifndef FAN_H
#define FAN_H
using namespace std;
class Fan {
private:
	int speed;
	bool on;
	double radius;
public:
	Fan();
	int getSpeed();
	void setSpeed(int _speed);
	bool isOn();
	void setOn(bool _on);
	double getRadius();
	void setRadius(double _radius);
};

#endif
