#include"BBB.h"
#include<iostream>
using namespace std;

BBB::BBB() {
	cout << "BBB ���� ���� ������" << endl;
	d = 0; 
	name[0] = NULL;
}
BBB::BBB(int _d, const char* _name) {
	cout << "BBB ���� �ִ� ������" << endl;
	d = _d;
	strcpy_s(name, strlen(_name) + 1, _name);
}
BBB::~BBB() {
	cout << "BBB �Ҹ���" << endl;
}
void BBB::Print() {
	cout << "d name: " << d << " " << name << endl;
	cout << "pri pro pub: " << pro << " " << pub << endl;

}