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
	//// 1. 배열명을 사용한 index 표현
	//// 2. 배열명을 사용한 포인터 표현 // i의 2 제곱으로 초기화
	//// 3. 배열명을 저장한 포인터 변수를 사용한 포인터 표현 // i의 3 제곱으로 초기화
	//// 4. 배열명을 저장한 포인터 변수를 사용한 index 표현 // i의 4 제곱으로 초기화
	int A[10] = { -999 };
	int* p = A;
	//cout << "1. 배열명을 사용한 index 표현" << endl;
	//for (int i = 0; i < 10; i++) {
	//	A[i] = i; // i의 1 제곱으로 초기화
	//}
	//for (int i = 0; i < 10; i++) {
	//	cout << A[i] << " ";
	//}
	//cout << endl << endl;

	//cout << "2. 배열명을 사용한 포인터 표현" << endl;
	//for (int i = 0; i < 10; i++) {
	//	*(A + i) = i * i; // i의 2 제곱으로 초기화
	//}
	//for (int i = 0; i < 10; i++) {
	//	cout << A[i] << " ";
	//}
	//cout << endl << endl;

	//cout << "3. 배열명을 저장한 포인터 변수를 사용한 포인터 표현" << endl;
	//p = A;
	//for (int i = 0; i < 10; i++) {
	//	*(p + i) = i * i * i; // i의 3 제곱으로 초기화
	//}
	//for (int i = 0; i < 10; i++) {
	//	cout << A[i] << " ";
	//}
	//// p 값이 변경되었는가? 아님.
	//cout << endl << endl;

	//cout << "4. 배열명을 저장한 포인터 변수를 사용한 index 표현" << endl;
	//for (int i = 0; i < 10; i++) {
	//	p[i] = i * i * i * i; // i의 4 제곱으로 초기화
	//}
	//for (int i = 0; i < 10; i++) {
	//	cout << A[i] << " ";
	//}
	//cout << endl << endl;
	//int i = 100;
	//int* q = &i;
	//cout << "q = " << q << endl;
	//cout << "++q = " << ++q << endl; // preincrement. q is incremented by 4, 늘어난 값을 cout에게 전달
	//cout << "q = " << q << endl;
	//q = &i;
	//cout << "q = " << q << endl;
	//cout << "q++ = " << q++ << endl; // postincrement. cout에게 값을 먼저 전달, q is incremented by 4.
	//cout << "q = " << q << endl;

	cout << "3-1. postincrement. 배열명을 저장한 포인터 변수를 사용한 포인터 표현" << endl;
	cout << "p = " << p << endl; // 가정: p의 값이 FC90.
	for (int i = 0; i < 10; i++) {
		*p++ = i * i * i; // i의 3 제곱으로 초기화
	}
	cout << "p = " << p << endl; // p의 값이 얼마일까? FCB8.
	for (int i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}
	cout << endl << endl;

	cout << "3-2. preincrement. 배열명을 저장한 포인터 변수를 사용한 포인터 표현" << endl;
	p = A; // 가정: p의 값이 FA54
	for (int i = 0; i < 10; i++) {
		*++p = i * i * i; // i의 3 제곱으로 초기화
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