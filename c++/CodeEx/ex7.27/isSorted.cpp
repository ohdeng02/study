#include <iostream>
using namespace std;
bool isSorted(const int list[], int size);

int main() {
	cout << "Enter list: ";
	int list[80];
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> list[i];
	}
	bool sort = isSorted(list, size);
	if (sort == true) {
		cout << "The list is already sorted" << endl;
	}
	else {
		cout << "The list is not sorted" << endl;
	}
	return 0;
}
bool isSorted(const int list[], int size) {
	for (int i = 0; i < size-1; i++) {
		if (list[i] > list[i + 1]) {
			return false;
		}
	}
	return true;
}