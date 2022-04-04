#include <iostream>
#include "Rect.h"
using namespace std;

Rect::Rect()
	:Geometric()
{
	cout << "Rect 인자 없는 생성자" << endl;
	width = 1; height = 1;
}
Rect::Rect(double _width, double _height)
	: Geometric()
{
	cout << "Rect 인자 있는 생성자" << endl;
	width = _width; height = _height;
}
Rect::Rect(double _width, double _height, const string& _color, bool _filled)
	: Geometric(_color, _filled)
{
	cout << "Rect 인자 있는 생성자" << endl;
	width = _width; height = _height;
}
Rect::Rect(const Rect& r)
	:Geometric(r)
{
	cout << "Rect 복사 생성자" << endl;
	width = r.width;
	height = r.height;
}
Rect::~Rect() {
	cout << "Rect 소멸자" << endl;
}
double Rect::getWidth() {
	return width;
}
void Rect::setWidth(double _width) {
	width = _width;
}
double Rect::getHeight() {
	return height;
}
void Rect::setHeight(double _height) {
	height = _height;
}
double Rect::getArea(){
	return height * width;
}
double Rect::getPerimeter() {
	return 2 * (height + width);
}
string Rect::toString() {
	return "나는 Rect 객체입니다.";
}
