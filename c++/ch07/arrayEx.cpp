#include <iostream>
using namespace std;
int funcmin(char ip[], int num);

int main() {
	char C[] = { 'D', 'a', 'l', 'l', 'a', 's' };
	char D[] = { "Dallas" };
	//cout << "(void*)C:" <<(void*)C<< endl;
	//cout << "(void*)D:" <<(void*)D << endl;
	//cout <<"C:"<< C <<" "<<"sizeof(C):"<<sizeof(C)<<endl;
	//cout << "strlen(C):" << strlen(C) << endl;
	//cout << "D:" << D << " " << "sizeof(D):" << sizeof(D) << endl;
	//cout << "strlen(D):" << strlen(D) << endl;
 //   int A[3] = { 1, 2, 3 };
	//int B[3] = { 10, 20, 30 };
	//// A = B; // error C3863: �迭 ���� 'int [3]'��(��) �Ҵ��� �� �����ϴ�. A�� ��� �����ʹ�.
	//cout << "A = " << A << endl;
	//cout << "address of A[0] = " << &A[0] << endl;
	//cout << "sizeof(int) = " << sizeof(int) << endl;
	//cout << "sizeof(A) = " << sizeof(A) << endl; // int size 4 * ����� ���� 3 = 12
	int res;
	res = funcmin(C, 6);
	return 0;
}
int funcmin(char ip[], int num) {
	cout << "sizeof ip = " << sizeof(ip) << endl;
	return 1;
}