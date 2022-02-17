#include <iostream>
using namespace std;

void f(int a, int b, int& sum, int& mul);
int main() {
	int a = 2;
	int b = 5;
	int s;
	int m;
	cout << "address of s : " << &s << endl;
	cout << "address of m : " << &m << endl;
	f(a, b, s, m);
	cout << "s = " << s << endl;
	cout << "m = " << m << endl;

	return 0;
}
void f(int a, int b, int& sum, int& mul) {
	cout << "address of sum : " << &sum << endl;
	cout << "address of mul : " << &mul << endl;
	sum = a + b;
	mul = a * b;
	cout << "sum=" << sum << endl;
	cout << "mul=" << mul << endl;
}