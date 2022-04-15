#include "AAA.h"
#include <iostream>
using namespace std;

AAA::AAA() {
	cout << "AAA인자 없는 생성자" << endl;
	pri = 0; pro = 0; pub = 0;
}
AAA::AAA(int _pri, int _pro, int _pub) {
	cout << "AAA인자 있는 생성자" << endl;
	pri = _pri; pro = _pro; pub = _pub;
}
AAA::~AAA() {
	cout << "AAA 소멸자" << endl;
}
void AAA::Print() {
	cout << "pri pro pub: " << pri <<" "<< pro <<" "<< pub << endl;
}