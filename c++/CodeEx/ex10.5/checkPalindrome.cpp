#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& s);

int main() {
	cout << "Enter a string s: ";
	string s;
	getline(cin, s);
	bool palindrome = isPalindrome(s);
	if (palindrome == true) {
		cout << s << " is a palindrome" << endl;
	}
	else {
		cout << s << " is not a palindrome" << endl;
	}
	return 0;
}
bool isPalindrome(const string& s) {
	string s1=s;
	char temp;
	for (int i = 0; i < s1.size() / 2; i++) {
		temp = s1[i];
		s1[i] = s1[s1.size() - 1 - i];
		s1[s1.size() - 1 - i] = temp;
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s1[i]) {
			return false;
		}
	}
	return true;
}