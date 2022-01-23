#include <iostream>
using namespace std;

int main() {
	cout << "Enter the integers between 1 and 100: ";
	int numbers[100];
	int i=0;
	int count[100] = { 0 };
	while (true) {
		cin >> numbers[i];
		if (numbers[i] == 0) {
			break;
		}
		else {
			count[numbers[i] - 1]++;
		}
		i++;
	}
	for (int j = 0; j < 100; j++) {
		if (count[j] > 0) {
			cout << j+1 << " occurs " << count[j] << "times" << endl;
		}
	}
	return 0;
}