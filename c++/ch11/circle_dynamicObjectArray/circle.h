#ifndef CIRCLE_H
#define CIRCLE_H
class Circle {
private:
	double radius; // client에서 access 불가
public:
	Circle();
	Circle(double radius);
	Circle(const Circle& obj); // copy constructor 복사 생성자
	~Circle();
	double getArea();
	double getRadius();
	void setRadius(double radius);
	void showYourself();
private:
	static int numOfObjs;
public:
	static int getNumOfObjs();
};
#endif