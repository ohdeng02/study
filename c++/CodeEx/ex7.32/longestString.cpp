#include <iostream>
using namespace std;

int main() {
	cout << "Enter the string1: ";
	char string1[100];
	cin >> string1;
	cout << "Enter the string2: ";
	char string2[100];
	cin >> string2;
	if (strlen(string1) > strlen(string2)) {
		cout << string1 << endl;
	}
	else {
		cout << string2 << endl;
	}
	return 0;
}