#include <iostream>
using namespace std;

int main() {
	cout << "Enter three points for a triangle: ";
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double s = (sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)) + sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2)) +
		sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2))) / 2;
	double area = sqrt(s*(s - sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)))*(s - sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2)))*(s-sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2))));
	cout << "The area of the triangle is " << area << endl;
	return 0;
}