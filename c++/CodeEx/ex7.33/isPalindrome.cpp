#include <iostream>
using namespace std;
int isPalindrome(const char s[]);

int main() {
	cout << "Enter string: ";
	char s[100];
	cin.getline(s, 100);
	int length = isPalindrome(s);
	cout << length << endl;
	return 0;
}
int isPalindrome(const char s[]) {
	char s1[100];
	int size = strlen(s);
	for (int i = 0; i <= size/2; i++) {
		s1[i] = s[size - i - 1];
		s1[size - i - 1] = s[i];
	}
	s1[size] = NULL;
	cout << s1 << endl;
	for (int i = 0; i < size; i++) {
		if (s[i] != s1[i]) {
			return -1;
		}
	}
	return size;
}