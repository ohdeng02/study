#include "AAA.h"
#include <iostream>
using namespace std;

AAA::AAA() {
	cout << "AAA���� ���� ������" << endl;
	pri = 0; pro = 0; pub = 0;
}
AAA::AAA(int _pri, int _pro, int _pub) {
	cout << "AAA���� �ִ� ������" << endl;
	pri = _pri; pro = _pro; pub = _pub;
}
AAA::~AAA() {
	cout << "AAA �Ҹ���" << endl;
}
void AAA::Print() {
	cout << "pri pro pub: " << pri <<" "<< pro <<" "<< pub << endl;
}