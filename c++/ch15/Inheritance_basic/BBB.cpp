#include"BBB.h"
#include<iostream>
using namespace std;

BBB::BBB() {
	cout << "BBB 인자 없는 생성자" << endl;
	d = 0; 
	name[0] = NULL;
}
BBB::BBB(int _d, const char* _name) {
	cout << "BBB 인자 있는 생성자" << endl;
	d = _d;
	strcpy_s(name, strlen(_name) + 1, _name);
}
BBB::~BBB() {
	cout << "BBB 소멸자" << endl;
}
void BBB::Print() {
	cout << "d name: " << d << " " << name << endl;
	cout << "pri pro pub: " << pro << " " << pub << endl;

}