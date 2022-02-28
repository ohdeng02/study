#ifndef CIRCLE_H
#define CIRCLE_H
class Circle {
private:
	double radius; // client���� access �Ұ�
public:
	Circle();
	Circle(double radius);
	Circle(const Circle& obj); // copy constructor ���� ������
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