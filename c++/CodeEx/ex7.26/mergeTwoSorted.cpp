#include <iostream>
using namespace std;
void merge(const int list1[], const int list2[], int size1, int size2, int list3[]);

int main() {
	const int MAX = 80;
	cout << "Enter list1: ";
	int list1[MAX];
	int list2[MAX];
	int size1,size2;
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2: ";
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	int list3[MAX];
	merge(list1, list2, size1, size2, list3);
	cout << "The merged list is ";
	for (int i = 0; i<size1+size2; i++) {
		cout << list3[i]<<" ";
	}
	return 0;
}
void merge(const int list1[], const int list2[], int size1, int size2, int list3[]) {
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for (int i = size1; i < size1 + size2; i++) {
		list3[i] = list2[i - size1];
	}
	for (int i = 0; i < size1 + size2 - 1; i++) {
		int min = list3[i];
		for (int j = i + 1; j < size1 + size2; j++) {
			if (min > list3[j]) {
				list3[i] = list3[j];
				list3[j] = min;
				min = list3[i];
			}
		}
	}
}