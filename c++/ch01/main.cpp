#include <iostream>
using namespace std;
//area() �Լ��� prototype
double area(int r);
int main() {
	cout << "Hello" << endl;
	int n = 3;
	char c = '#';
	cout << c << 5.5 << '-' << n << "grace" << endl;
	cout << "n + 5 =" << n + 5 << endl;
    //integer�� �Ű������� �޾� ���� ������ ����ϴ� �Լ��� return ���� �������.
	cout << area(n);
    return 0;
}
//areaI() �Լ� ����
double area(int r)
{
	return 3.14 * r * r;
}