#include<iostream>
#include <string>
using namespace std;

int main() {
	string S[3] = { "Alpha Go","Steven Jobs","Foo Bar" };
	string* p = S;
	cout << S << endl;
	cout << "address of S[0]:" << &S[0] << endl;
	cout << "address of S[1]:" << &S[1] << endl;
	cout << "address of S[2]:" << &S[2] << endl;
	cout << "sizeof(S[1]):" << sizeof(S[1]) << endl;//28
	for (int i = 0;i < 3;i++) {
		//index expression with array name
		cout << S[i] << " " ;
		cout << *(S + i) << " ";
		cout << p[i] << " ";
		cout << *(p + i) << endl;
	}
	//char cstyle[] = { "Are you a string, too?" };
	//string cppstyle = "Who an i?";
	//cout << cstyle << endl;
	//cout << cppstyle << endl;
	//cout << "sizeof(string):" << sizeof(string) << endl;//28
	//cout << "strlen(cstyle):" << strlen(cstyle) << endl;//i
	//cout << "sizeof(cstyle):" << sizeof(cstyle) << endl;//i+1
	//cout << "sizeof(cppstyle):" << sizeof(cppstyle) << endl;//28
	//cout << "cppstyle.size():" << cppstyle.size() << endl;//strlen 나옴(9)
	////문자열 복사
	//char A[50] = "Sedol Lee";//9
	//char B[50] = "Alpha Go";//8
	//strcpy_s(B, sizeof(B), A);
	//cout << "B:" << B << endl;
	//string Astr = "Sedol Lee";
	//string Bstr = "Alpha Go";
	//Bstr = Astr;
	//cout << "Bstr:" << Bstr << endl;
	//cout << "Bstr.size():" << Bstr.size() << endl;
	////string input without space
	//cout << "Cstyle string input(no space):";
	//cin >> A;
	//cout << "CPP style string input(no space):";
	//cin >> Astr;
	//cout << "A:" << A << " " << "Astr:" << Astr << endl;
	////string input with space
	//cin.clear();
	//cin.ignore();
	//cout << "Cstyle string input(with space):";
	//cin.getline(A, sizeof(A));
	//cout << "CPP style string input(no space):";
	//getline(cin, Astr);
	//cout << "A:" << A << " " << "Astr:" << Astr << endl;

	return 0;
}