#include <iostream>
using namespace std;
//area() 함수의 prototype
double area(int r);
int main() {
	cout << "Hello" << endl;
	int n = 3;
	char c = '#';
	cout << c << 5.5 << '-' << n << "grace" << endl;
	cout << "n + 5 =" << n + 5 << endl;
    //integer를 매개변수로 받아 원의 면적을 계산하는 함수의 return 값을 출력하자.
	cout << area(n);
    return 0;
}
//areaI() 함수 구현
double area(int r)
{
	return 3.14 * r * r;
}
