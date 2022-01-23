#include <iostream>
using namespace std;

int main() {
	cout << "Enter the number of minutes: ";
	int min;
	cin >> min;
	int y, d;
	y = ((min / 60) / 24)/365;
	int a;
	a = (min / 60) / 24;
	d = a % 365;
	cout << min << " minutes is approximately " << y << "years and " << d << "days" << endl;
	return 0;
}