#include <iostream>
using namespace std;

int main() {
	cout << "Enter list1: ";
	int list2[10], list1[10];
	for (int i = 0; i < 10; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2: ";
	for (int i = 0; i < 10; i++) {
		cin >> list2[i];
	}
	int list3[10];
	int index = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (list1[i] == list2[j]) {
				list3[index] = list1[i];
				index++;
			}
		}
	}
	cout << "The common elements are ";
	for (int i = 0; i<index; i++) {
		cout << list3[i] << " ";
	}
	return 0;
}