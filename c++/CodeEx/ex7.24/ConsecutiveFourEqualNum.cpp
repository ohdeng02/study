#include <iostream>
using namespace std;
bool isConsecutiveFour(const int values[], int size);

int main() {
	cout << "Enter the number of values: ";
	int size;
	cin >> size;
	cout << "Enter the values: ";
	int list[80];
	for (int i = 0; i < size; i++) {
		cin >> list[i];
	}
	bool consecutive = isConsecutiveFour(list, size);
	if (consecutive == true) {
		cout << "The list has consecutive fours" << endl;
	}
	else {
		cout << "The list has no consecutive fours" << endl;
	}
	return 0;
}
bool isConsecutiveFour(const int values[], int size) {
	for (int i = 0; i < size; i++) {
		if (values[i] == values[i + 1] && values[i + 1] == values[i + 2] && values[i+2]==values[i+3]) {
			return true;
		}
	}
	return false;
}