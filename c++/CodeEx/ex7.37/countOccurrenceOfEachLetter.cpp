#include <iostream>
using namespace std;
void count(const char s[], int counts[]);

int main() {
	cout << "Enter a string: ";
	char s[100];
	int counts[26] = { 0 };
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0) {
			cout << (char)('a' + i) << ": " << counts[i] << " times" << endl;
		}
	}
	return 0;
}
void count(const char s[], int counts[]) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			counts[s[i] - 97]++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			counts[s[i] - 65]++;
		}
	}
}