#include <iostream>
#include "MyPoint.h"
using namespace std; 

int main() {
	MyPoint a(0, 0);
	MyPoint b(10, 30.5);
	cout << "�Ÿ�: " << a.distance(b) << endl;
	return 0;
}