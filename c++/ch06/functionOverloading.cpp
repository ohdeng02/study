#include <iostream>
using namespace std;

int max(int a, int b);
//int max(int x, int y);위의 함수와 signature가 같다.
//double max(int a, int b);//위의 함수들과 signature가 같다.
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
