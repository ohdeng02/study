#include <iostream>
using namespace std;
int maxVal(const int& a, const int& b);
void swapByValue(int x, int y);
void swapByRef(int& rx, int& ry);

int main() {
	// ����ڿ��� �� ���� ������ �Է¹޴´�.
	// �Էµ� ������ ����Ѵ�. 
	// swapByValue�� ���Ѵ�.
	// �� ���� ������ ����Ѵ�.
	// swapByRef�� ���Ѵ�.
	// �� ���� ������ ����Ѵ�.
	int i, j;
	cout << "i��: "; cin >> i;
	cout << "j��: "; cin >> j;
	cout << endl << "�Էµ� i: " << i << "�Էµ� j: " << j << endl;
	swapByValue(i, j);
	cout << endl << "swapByValue �� ���� i: " << i << " j: " << j << endl;
	swapByRef(i, j);
	cout << endl << "swapByRef �� ���� i: " << i << " j: " << j << endl;
	swapByRef(i, j);
	cout << endl << "swapByRef �� ���� i: " << i << " j: " << j << endl;
	return 0;
	/*int x = 5, y = -50;
	int r = maxVal(x, y);
	cout << "maxVal�� " << r << " �Դϴ�." << endl;
	return 0;*/
}
int maxVal(const int& a, const int& b) {
	// a = 5000; error C3892: 'a': const�� ������ �Ҵ��� �� �����ϴ�.
	int result;
	if (a > b)
		result = a;
	else
		result = b;
	return result;
}
void swapByValue(int x, int y) {
	cout << "In swapByValue x= " << x << " y = " << y << endl;
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "In swapByValue x= " << x << " y = " << y << endl;
}
void swapByRef(int& rx, int& ry) {
	cout << "In swapByRef rx= " << rx << " ry = " << ry << endl;
	int temp;
	temp = rx;
	rx = ry;
	ry = temp;
	cout << "In swapByRef rx= " << rx << " ry = " << ry << endl;
}