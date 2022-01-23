#include <iostream>
using namespace std;
double min(double array[], int size);

int main() {
	cout << "Enter ten numbers: ";
	double numbers[10];
	for (int i = 0; i < sizeof(numbers)/8; i++) {
		cin >> numbers[i];
	}
	double mini = min(numbers, sizeof(numbers)/8);
	cout << "The minimum number is " << mini << endl;
	return 0;
}
double min(double array[], int size) {
	double mini=array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] < mini) {
			mini = array[i];
		}
	}
	cout << mini << endl;
	return mini;
}