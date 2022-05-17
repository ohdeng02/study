#include<iostream>
using namespace std;
int quotient(int n1, int n2);

int main() {
	cout << "Enter two integers: ";
	int num1, num2;
	cin >> num1 >> num2;
	try {
		int res = quotient(num1, num2);
		cout << "��: " << res << endl;
	}
	catch(int ex){//exception handling
		cout << ex << "�� 0���� �������� �� �����ϴ�." << endl;
	}
	cout << "Execution continues..." << endl;
	return 0;
}

int quotient(int n1, int n2) {
	if (n2 == 0) {
		throw n1;//exception detection 
	}
	return n1 / n2;
}