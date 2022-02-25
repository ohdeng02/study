#include<iostream>
#include "count.h"
using namespace std;

Count::Count() {
	cout << "no arg constructor" << endl;
	ct = 0;
}
Count::Count(int i) {
	cout << "arg constructor" << endl;
	ct = i;
}
int Count::getCt() {
	return ct;
}
void Count::setCt(int n) {
	ct = n;
}