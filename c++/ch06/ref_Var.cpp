#include <iostream>
using namespace std;
void increment(double& n);

int main() {
	int target = 20;
	double x = 1.0;
	cout << "address of x : " << &x << endl;
	increment(x);
	cout << "x = " << x << endl;
	int& ref = target; // 20 numeric literal 로 초기화 할 수 없다.
	cout << "ref: " << ref << " target: " << target << endl;
	cout << "address of ref = " << &ref << " address of target = " << &target << endl;

	ref = 100;

	cout << "ref: " << ref << " target: " << target << endl;
	return 0;
}
void increment(double& n) {
	cout << "address of n: " << &n << endl;
	n++;
}