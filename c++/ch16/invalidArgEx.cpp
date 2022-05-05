#include<iostream>
#include<stdexcept>
using namespace std;
double getArea(double radius);

int main() {
	cout << "Enter radius: ";
	double r;
	cin >> r;
	try {
		double res = getArea(r);
		cout << "������ " << res << endl;
	}
	catch(exception& ex){
		cout << ex.what() << endl;
	}
	cout << "Execution continues..." << endl;
	return 0;
}
double getArea(double radius) {
	if (radius < 0) {
		invalid_argument e("Radius cannot be negative");//���α׷��� ������ ������ ���� �ȵǴ� argument�϶�
		throw e;
	}
	return radius * radius * 3.14159;
}
