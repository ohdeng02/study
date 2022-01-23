#include <iostream>
using namespace std;

int main() {
	const int MAX = 100;
	cout << "Enter the list1: ";
	int list1[MAX], list2[MAX];
	int num1, num2;
	cin >> num1;
	for (int i = 0; i < num1; i++) {
		cin >> list1[i];
	}
	cout << "Enter the list2: ";
	cin >> num2;
	for (int i = 0; i < num2; i++) {
		cin >> list2[i];
	}
	int b=0, a = 0;
	if (num1 == num2) {
		for (int i = 0; i < num1; i++) {
			for (int j = 0; j < num1; j++) {
				if (list1[i] == list1[j]) {
					a++;
				}
			}
			for (int k = 0; k < num1; k++) {
				if (list1[i] == list2[k]) {
					b++;
				}
			}
			if (a != b) {
				cout << "Two lists are not identical" << endl;
				return 0;
			}
			a = 0, b = 0;
		}
		cout << "Two lists are identical" << endl;
	}
	else {
		cout << "Two lists are not identical" << endl;
	}
	return 0;
}