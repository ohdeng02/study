#include <iostream>
using namespace std;
bool strictlyEqual(const int list1[], const int list2[], int size);

int main() {
	const int MAX = 20;
	cout << "Enter list1: ";
	int list1[MAX];
	int list2[MAX];
	int num1,num2;
	cin >> num1;
	for (int i = 0; i < num1; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2: ";
	cin >> num2;
	for (int i = 0; i < num2; i++) {
		cin >> list2[i];
	}
	if (num1 == num2) {
		bool strict = strictlyEqual(list1, list2, num1);
		if (strict == true) {
			cout << "Two lists are strictly identical" << endl;
		}
		else {
			cout << "Two lists are not strictly identical" << endl;
		}
	}
	else {
		cout << "Two lists are not strictly identical" << endl;
	}
	return 0;
}
bool strictlyEqual(const int list1[], const int list2[], int size) {
	for (int i = 0; i < size; i++) {
		if (list1[i] != list2[i]) {
			return false;
		}
	}
	return true;
}