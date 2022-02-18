#include <iostream>
using namespace std;
int maxVal(const int& a, const int& b);
void swapByValue(int x, int y);
void swapByRef(int& rx, int& ry);

int main() {
	// 사용자에게 두 개의 변수를 입력받는다.
	// 입력된 변수를 출력한다. 
	// swapByValue를 콜한다.
	// 두 개의 변수를 출력한다.
	// swapByRef를 콜한다.
	// 두 개의 변수를 출력한다.
	int i, j;
	cout << "i값: "; cin >> i;
	cout << "j값: "; cin >> j;
	cout << endl << "입력된 i: " << i << "입력된 j: " << j << endl;
	swapByValue(i, j);
	cout << endl << "swapByValue 콜 이후 i: " << i << " j: " << j << endl;
	swapByRef(i, j);
	cout << endl << "swapByRef 콜 이후 i: " << i << " j: " << j << endl;
	swapByRef(i, j);
	cout << endl << "swapByRef 콜 이후 i: " << i << " j: " << j << endl;
	return 0;
	/*int x = 5, y = -50;
	int r = maxVal(x, y);
	cout << "maxVal은 " << r << " 입니다." << endl;
	return 0;*/
}
int maxVal(const int& a, const int& b) {
	// a = 5000; error C3892: 'a': const인 변수에 할당할 수 없습니다.
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