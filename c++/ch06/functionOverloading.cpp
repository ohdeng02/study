#include <iostream>
using namespace std;

int max(int a, int b);
//int max(int x, int y);���� �Լ��� signature�� ����.
//double max(int a, int b);//���� �Լ���� signature�� ����.
double max(double a, double b);

int main() {
	cout << max(5, 7) << endl;
	cout << max(5.4, 7.2) << endl;
	return 0;
}

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}

}
double max(double a, double b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}

}
