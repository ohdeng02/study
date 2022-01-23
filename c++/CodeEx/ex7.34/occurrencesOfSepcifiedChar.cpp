#include <iostream>
using namespace std;
int count(const char s[], char a);

int main() {
	cout << "Enter the string: ";
	char s[100];
	char a;
	cin.getline(s, 100);
	cout << "Enter the char: ";
	cin >> a;
	int num = count(s, a);
	cout << "Count is " << num << endl;
	return 0;
}
int count(const char s[], char a) {
	int num = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == a) {
			num++;
		}
	}
	return num;
}