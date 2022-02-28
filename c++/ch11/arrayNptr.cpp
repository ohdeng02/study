#include <iostream>
using namespace std;

int main() {
	//int a = 123;
	//int* ip = &a;
	//char c = 'p';
	//char* cp = &c;
	//short s = 5;
	//short* sp = &s;
	//cout << "ip = " << ip << endl;
	//cout << "ip + 2 = " << ip + 2 << endl; // Bigger than ip by 2 * 4
	//cout << "ip + 7 = " << ip + 7 << endl; // Bigger than ip by 7 * 4
	//cout << "cp = " << (void*)cp << endl;
	//cout << "cp + 2 = " << (void*)(cp + 2) << endl; // Bigger than cp by 2 * 1
	//cout << "cp + 7 = " << (void*)(cp + 7) << endl; // Bigger than cp by 7 * 1
	//cout << "sp = " << sp << endl;
	//cout << "sp + 2 = " << sp + 2 << endl; // Bigger than sp by 2 * 2
	//cout << "sp + 7 = " << sp + 7 << endl; // Bigger than sp by 7 * 2
	//short S[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//short* ps1 = &S[3];
	//short* ps2 = &S[7];
	//cout << "ps1 = " << ps1 << endl;
	//cout << "ps2 = " << ps2 << endl;
	//cout << "ps2 - ps1 = " << ps2 - ps1 << endl; // divided by sizeof(short)
	//// 1. �迭���� ����� index ǥ��
	//// 2. �迭���� ����� ������ ǥ�� // i�� 2 �������� �ʱ�ȭ
	//// 3. �迭���� ������ ������ ������ ����� ������ ǥ�� // i�� 3 �������� �ʱ�ȭ
	//// 4. �迭���� ������ ������ ������ ����� index ǥ�� // i�� 4 �������� �ʱ�ȭ
	int A[10] = { -999 };
	int* p = A;
	//cout << "1. �迭���� ����� index ǥ��" << endl;
	//for (int i = 0; i < 10; i++) {
	//	A[i] = i; // i�� 1 �������� �ʱ�ȭ
	//}
	//for (int i = 0; i < 10; i++) {
	//	cout << A[i] << " ";
	//}
	//cout << endl << endl;

	//cout << "2. �迭���� ����� ������ ǥ��" << endl;
	//for (int i = 0; i < 10; i++) {
	//	*(A + i) = i * i; // i�� 2 �������� �ʱ�ȭ
	//}
	//for (int i = 0; i < 10; i++) {
	//	cout << A[i] << " ";
	//}
	//cout << endl << endl;

	//cout << "3. �迭���� ������ ������ ������ ����� ������ ǥ��" << endl;
	//p = A;
	//for (int i = 0; i < 10; i++) {
	//	*(p + i) = i * i * i; // i�� 3 �������� �ʱ�ȭ
	//}
	//for (int i = 0; i < 10; i++) {
	//	cout << A[i] << " ";
	//}
	//// p ���� ����Ǿ��°�? �ƴ�.
	//cout << endl << endl;

	//cout << "4. �迭���� ������ ������ ������ ����� index ǥ��" << endl;
	//for (int i = 0; i < 10; i++) {
	//	p[i] = i * i * i * i; // i�� 4 �������� �ʱ�ȭ
	//}
	//for (int i = 0; i < 10; i++) {
	//	cout << A[i] << " ";
	//}
	//cout << endl << endl;
	//int i = 100;
	//int* q = &i;
	//cout << "q = " << q << endl;
	//cout << "++q = " << ++q << endl; // preincrement. q is incremented by 4, �þ ���� cout���� ����
	//cout << "q = " << q << endl;
	//q = &i;
	//cout << "q = " << q << endl;
	//cout << "q++ = " << q++ << endl; // postincrement. cout���� ���� ���� ����, q is incremented by 4.
	//cout << "q = " << q << endl;

	cout << "3-1. postincrement. �迭���� ������ ������ ������ ����� ������ ǥ��" << endl;
	cout << "p = " << p << endl; // ����: p�� ���� FC90.
	for (int i = 0; i < 10; i++) {
		*p++ = i * i * i; // i�� 3 �������� �ʱ�ȭ
	}
	cout << "p = " << p << endl; // p�� ���� ���ϱ�? FCB8.
	for (int i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}
	cout << endl << endl;

	cout << "3-2. preincrement. �迭���� ������ ������ ������ ����� ������ ǥ��" << endl;
	p = A; // ����: p�� ���� FA54
	for (int i = 0; i < 10; i++) {
		*++p = i * i * i; // i�� 3 �������� �ʱ�ȭ
	}
	for (int i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}
	cout << endl << endl;

	return 0;
}

/*
ip = 006EF9C0
ip + 2 = 006EF9C8
ip + 7 = 006EF9DC
cp = 006EF9AB
cp + 2 = 006EF9AD
cp + 7 = 006EF9B2
sp = 006EF990
sp + 2 = 006EF994
sp + 7 = 006EF99E
*/