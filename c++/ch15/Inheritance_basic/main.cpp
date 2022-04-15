#include "AAA.h"
#include "BBB.h"
#include <iostream>
using namespace std;

int main() {
	cout << "sizeof(AAA): " << sizeof(AAA) << endl;
	cout << "sizeof(BBB): " << sizeof(BBB) << endl;
	AAA a1;
	a1.Print();
	AAA a2(10, 20, 30);
	a2.Print();
	//cout << a1.pri << endl;
	//cout << a1.pro << endl;
	cout << a1.pub << endl;
	BBB b1;
	cout << "sizeof(b1): " << sizeof(b1) << endl;
	BBB b2(100, "¿À¼öÁø");
	b2.Print();
	//cout << b2.d;
	//cout << b2.pri;
	//cout << b2.pro;
	cout << b2.pub;
	a2 = b2;
	a2.Print();
	return 0;
}